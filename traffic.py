#creating trafic light 

import time

def traffic_light(duration, vehicle_type):
    if vehicle_type.lower() == "ambulance":
        print("Traffic Light: PASS (Ambulance detected)")
    else:
        print("Traffic Light: STOP")
        if duration > 10:
            time.sleep(duration - 10)
            print("Traffic Light: STAY ALERT")
            time.sleep(10)
        else:
            time.sleep(duration)
        print("Traffic Light: GO")

# Example usage
duration = int(input("Enter traffic light duration (in seconds): "))
while True:
    vehicle_type = input("Enter vehicle type: ")
    if vehicle_type.lower() not in ["ambulance","car","bike","cycle","rickshah","truck","bus"]:
        print("INVALID VEHICLE TYPE.PKEASE ENTER THE CORRECT VEHICLE TYPE....")
        continue
    else:
        break
traffic_light(duration, vehicle_type)
