#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include "windowParams.h"
#include <string>

class Window {
public:
    Window(); // default constructor
    Window(int id, const windowParams& params); // Constructor
    int getId() const; // Function to get id
    std::string getTitle() const;
    void close(); // Close function

private:
    int id;
    windowParams params;
    bool isOpen;
};

#endif // WINDOW