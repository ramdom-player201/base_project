// windowParams.h
#pragma once
#ifndef WINDOWPARAMS_H
#define WINDOWPARAMS_H

#include <string>

struct windowParams {
    enum WindowType {
        programWindow, // standard type
        warningWindow, // display a warning
        selectionWindow, // return a value when closed
        errorWindow // hold an error state
    };

    int width;
    int height;
    std::string title;
    WindowType type;

    // Add more parameters as needed
};

#endif // !WINDOWPARAMS