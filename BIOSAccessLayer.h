#ifndef BIOSACCESSLAYER_H
#define BIOSACCESSLAYER_H

#include <string>

// Function to get BIOS information for a specified field.
std::string getBIOSInfo(const std::string &field);

// Function to set a BIOS field to a new value.
bool setBIOSInfo(const std::string &field, const std::string &value);

#endif // BIOSACCESSLAYER_H
