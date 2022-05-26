#include "Logger.h"
#include "ConsoleColours.h"


void Logger::spacer(){
    std::cout << std::endl;
}

void Logger::log(std::string msg, Level logLevel){
    if(loggerLevel <= logLevel){
        std::string prepend;

        switch (logLevel)
        {
        case Level::Info:
            prepend = INFO "INFO: " NC; 
            break;

        case Level::Notice:
            prepend = NOTICE "NOTICE: " NC; 
            break;
        
        case Level::Warning:
            prepend = WARN "WARNING: " NC; 
            break;
        
        case Level::Error:
            prepend = ERR "ERROR: " NC; 
            break;
        
        default:
            break;
        }


        std::cout << prepend << msg << std::endl;
    }
}