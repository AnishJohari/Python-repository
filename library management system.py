import mysql.connector
import tkinter as tk
from tkinter import ttk, messagebox

# Database setup
def initialize_db():
    conn = mysql.connector.connect(host="localhost", user="root", password="Hanuman@_ji1971749905", database="library")
    cursor = conn.cursor()
    cursor.execute('''CREATE TABLE IF NOT EXISTS books (
                        id INT AUTO_INCREMENT PRIMARY KEY,
                        title VARCHAR(255),
                        author VARCHAR(255),
                        year INT,
                        available BOOLEAN DEFAULT TRUE)''')
    cursor.execute('''CREATE TABLE IF NOT EXISTS issued_books (
                        id INT AUTO_INCREMENT PRIMARY KEY,
                        book_id INT,
                        borrower VARCHAR(255),
                        issue_date DATE,
                        return_date DATE,
                        FOREIGN KEY (book_id) REFERENCES books(id))''')
    conn.commit()
    conn.close()

# Function to add a book
def add_book(title, author, year):
    conn = mysql.connector.connect(host="localhost", user="root", password="", database="library")
    cursor = conn.cursor()
    cursor.execute("INSERT INTO books (title, author, year, available) VALUES (%s, %s, %s, TRUE)", (title, author, year))
    conn.commit()
    conn.close()
    messagebox.showinfo("Success", "Book added successfully!")

# Function to issue a book
def issue_book(book_id, borrower, issue_date, return_date):
    conn = mysql.connector.connect(host="localhost", user="root", password="", database="library")
    cursor = conn.cursor()
    cursor.execute("SELECT available FROM books WHERE id=%s", (book_id,))
    book = cursor.fetchone()
    if book and book[0]:
        cursor.execute("INSERT INTO issued_books (book_id, borrower, issue_date, return_date) VALUES (%s, %s, %s, %s)", 
                       (book_id, borrower, issue_date, return_date))
        cursor.execute("UPDATE books SET available=FALSE WHERE id=%s", (book_id,))
        conn.commit()
        messagebox.showinfo("Success", "Book issued successfully!")
    else:
        messagebox.showwarning("Error", "Book not available!")
    conn.close()

# Function to return a book
def return_book(book_id):
    conn = mysql.connector.connect(host="localhost", user="root", password="", database="library")
    cursor = conn.cursor()
    cursor.execute("DELETE FROM issued_books WHERE book_id=%s", (book_id,))
    cursor.execute("UPDATE books SET available=TRUE WHERE id=%s", (book_id,))
    conn.commit()
    conn.close()
    messagebox.showinfo("Success", "Book returned successfully!")

# Function to delete a book
def delete_book(book_id):
    conn = mysql.connector.connect(host="localhost", user="root", password="", database="library")
    cursor = conn.cursor()
    cursor.execute("DELETE FROM books WHERE id=%s", (book_id,))
    conn.commit()
    conn.close()
    messagebox.showinfo("Success", "Book deleted successfully!")

# Function to view books
def view_books():
    conn = mysql.connector.connect(host="localhost", user="root", password="", database="library")
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM books")
    rows = cursor.fetchall()
    conn.close()
    return rows

# GUI Setup
class LibraryApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Library Management System")
        self.root.geometry("700x400")

        self.tree = ttk.Treeview(root, columns=("ID", "Title", "Author", "Year", "Available"), show="headings")
        self.tree.heading("ID", text="ID")
        self.tree.heading("Title", text="Title")
        self.tree.heading("Author", text="Author")
        self.tree.heading("Year", text="Year")
        self.tree.heading("Available", text="Available")
        self.tree.pack(pady=20)

        self.load_books()
        ttk.Button(root, text="Refresh", command=self.load_books).pack()

    def load_books(self):
        for row in self.tree.get_children():
            self.tree.delete(row)
        for book in view_books():
            self.tree.insert("", "end", values=book)

if __name__ == "__main__":
    initialize_db()
    root = tk.Tk()
    app = LibraryApp(root)
    root.mainloop()
