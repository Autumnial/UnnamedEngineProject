#pragma once
#include <iostream>
#include <string>

class Logger
{

public:
    enum class Level
    {
        Info,
        Notice,
        Warning,
        Error
    };
    static void log(std::string msg, Level logLevel);
    static void spacer();
    static Level loggerLevel;
};

Logger::Level Logger::loggerLevel = Logger::Level::Info;
