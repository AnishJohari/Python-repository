#include <stdio.h>
#include <string.h>
#include <unistd.h>  // For sleep() function

void traffic_light(int duration, char vehicle_type[]) {
    if (strcasecmp(vehicle_type, "ambulance") == 0) {
        printf("Traffic Light: PASS (Ambulance detected)\n");
    } else {
        printf("Traffic Light: STOP\n");
        if (duration > 10) {
            sleep(duration - 10);
            printf("Traffic Light: STAY ALERT\n");
            sleep(10);
        } else {
            sleep(duration);
        }
        printf("Traffic Light: GO\n");
    }
}

int main() {
    int duration;
    char vehicle_type[20];

    printf("Enter traffic light duration (in seconds): ");
    if (scanf("%d", &duration) != 1 || duration < 0) {
        printf("Invalid input! Please enter a valid positive integer for duration.\n");
        return 1;
    }

    printf("Enter vehicle type: ");
    scanf("%s", vehicle_type);

    traffic_light(duration, vehicle_type);
    
    return 0;
}
