Q132 Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

// Define the enum for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void printLightAction(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Unknown light\n");
            break;
    }
}

int main() {
    enum TrafficLight currentLight = RED;
    
    printLightAction(currentLight);         // Prints: Stop
    printLightAction(YELLOW);               // Prints: Wait
    printLightAction(GREEN);                // Prints: Go

    return 0;
}
