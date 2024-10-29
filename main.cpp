#include <iostream>
#include "BIOSAccessLayer.h"
#include "Logger.h"

void performAutomatedTasks() {
    // Step 1: Enable logging
    std::string logfile = "bios_spoofer_log.txt";
    enableLogging(logfile);
    std::cout << "Logging enabled to: " << logfile << "\n";

    // Step 2: Retrieve and print current serial number and UUID
    std::string serialNumber = getBIOSInfo("serialnumber");
    std::string uuid = getBIOSInfo("UUID");
    std::cout << "Current BIOS Serial Number: " << serialNumber << "\n";
    std::cout << "Current BIOS UUID: " << uuid << "\n";

    // Step 3: Modify specific BIOS settings (example values)
    std::string newSerialNumber = "TEMP_SERIAL_NUMBER";
    std::string newUUID = "TEMP-UUID-1234-5678-90AB-CDEF";
    
    // Attempt to set new values
    if (setBIOSInfo("serialnumber", newSerialNumber)) {
        logMessage("Successfully updated BIOS serial number.");
    } else {
        logMessage("Failed to update BIOS serial number.");
    }

    if (setBIOSInfo("UUID", newUUID)) {
        logMessage("Successfully updated BIOS UUID.");
    } else {
        logMessage("Failed to update BIOS UUID.");
    }

    // Step 4: Close logging
    closeLogging();
}

int main() {
    performAutomatedTasks();
    return 0;
}
