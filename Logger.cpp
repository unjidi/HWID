#include "Logger.h"
#include <iostream>
#include <fstream>

// Global variable to hold the log file stream
std::ofstream logFile;

// Function to enable logging to a specified file.
void enableLogging(const std::string &logfile) {
    logFile.open(logfile, std::ios::app); // Append mode
    if (!logFile.is_open()) {
        std::cerr << "Error: Unable to open log file.\n";
    } else {
        logMessage("Logging started.");
    }
}

// Function to log a message to the log file.
void logMessage(const std::string &message) {
    if (logFile.is_open()) {
        logFile << message << std::endl;  // Write the message to the log file
        std::cout << message << std::endl; // Also print to console for feedback
    } else {
        std::cerr << "Log file is not open. Message not logged: " << message << std::endl;
    }
}

// Function to close the log file when done
void closeLogging() {
    if (logFile.is_open()) {
        logMessage("Logging ended.");
        logFile.close();
    }
}
