#include <fstream>

void logError(const std::string &message) {
    std::ofstream errorLog("error.log", std::ios_base::app);  // Append to the log file
    if (errorLog.is_open()) {
        errorLog << message << std::endl;
        errorLog.close();
    } else {
        std::cerr << "Unable to open log file" << std::endl;
    }
}

int main() {
    if (!createInstanceAsAdmin()) {
        std::string errorMessage = "Failed to create instance as admin";
        std::cout << errorMessage << std::endl;
        logError(errorMessage);
        return 1;
    }

    std::cout << "Instance created successfully as admin" << std::endl;
    return 0;
}
