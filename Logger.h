#ifndef LOGGER_H
#define LOGGER_H

#include <string>

// Function to enable logging to a specified file.
void enableLogging(const std::string &logfile);

// Function to log a message to the log file.
void logMessage(const std::string &message);

// Function to close the logging file.
void closeLogging();

#endif // LOGGER_H
