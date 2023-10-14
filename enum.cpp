#include <iostream>
using namespace std;

// Defining Constants (Enum for Colors)
enum Colors {
    Red,
    Green,
    Blue,
    Yellow
};

// Flags and Bitmasking (Enum for Permissions)
enum Permissions {
    Read = 1,
    Write = 2,
    Execute = 4
};

// State Machine (Enum for Traffic Light States)
enum TrafficLightState {
    RedLight,
    YellowLight,
    GreenLight
};
// Function to convert a string to TrafficLightState enum
TrafficLightState stringToTrafficLightState(const string& str) {
    if (str == "RedLight") {
        return RedLight;
    } else if (str == "YellowLight") {
        return YellowLight;
    } else if (str == "GreenLight") {
        return GreenLight;
    } else {
        // Handle invalid input here
        cerr << "Invalid input. Defaulting to RedLight." << endl;
        return RedLight;
    }
};

// Custom Data Types (Enum for Days of the Week)
enum DaysOfWeek {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    // Defining Constants Example
    Colors myColor = Green; // Using the Color enum constant

    // Flags and Bitmasking Example
    int userPermissions = Read | Write; // Combining flags using bitwise OR

    // State Machine Example
    string userInput;
    cout << "Enter a traffic light state (RedLight, YellowLight, GreenLight): ";
    cin >> userInput;

    // Convert the user input to a TrafficLightState enum
    TrafficLightState trafficState = stringToTrafficLightState(userInput);

    // Custom Data Types Example
    DaysOfWeek today = Wednesday;

    // Switch Statement Example (Using the State Machine Enum)
    switch (trafficState) {
        case RedLight:
            cout << "Stop! The light is red." << endl;
            break;
        case YellowLight:
            cout << "Slow down. The light is yellow." << endl;
            break;
        case GreenLight:
            cout << "Go ahead. The light is green." << endl;
            break;
    }

    return 0;
}

