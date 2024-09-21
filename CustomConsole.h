#pragma once
#ifndef CUSTOMCONSOLE_H
#define CUSTOMCONSOLE_H

class CustomConsole {
public:
    static void print(); // Declaration of the function
    static void printColoured(); // Declaration of the function
    static void log(const std::string& message);
};

#endif // CUSTOMCONSOLE_H


// Coloured Ouput (multi-platform)
// Formatted Output
// Logging Levels
// Log to file
// Timestamps!
// Configuration Options