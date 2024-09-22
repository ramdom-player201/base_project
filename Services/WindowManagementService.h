#pragma once
#ifndef WINDOWMANAGEMENTSERVICE_H
#define WINDOWMANAGEMENTSERVICE_H

//This service createsand manages window objects.
//* createWindow(windowParams) --generateand return a window object
//* getWindow(id)-- return window of specific id
//* getWindows()-- return a list of window id's with window meta data id=meta
//* closeWindows() --close all windows in the program, and send close request to terminal if applicable

//#include <vector> // to use std:vector for returning a list of windows
#include <unordered_map> // for key value pairs
#include "../Objects/2DGUI/windowParams.h"
#include "../Objects/2DGUI/Window.h"

//class Window;
//struct windowParams;

class WindowManagementService {
public:
    static Window createWindow(const windowParams& params); // create and return a window with the requested parameters
    // window can only be created if limit is not reached. If limit is reached, window should fail to open and an error state returned
    static Window* getWindow(int id); // return the window with the requested id
    // if the window with the requested id exists, or the id is out of the appropriate range, a relevant error state should be returned
    static std::unordered_map<int, Window> getAllWindows(); // return a list of all windows
    static void closeWindow(int id); // close requested window and remove it from list
    static void closeAllWindows(); // call close on all windows
    static int getWindowCount(); // get number of windows
    static constexpr int MAX_WINDOWS = 16; // max number of windows

private:
    //static std::vector<Window> windows; // list of windows
    static std::unordered_map<int, Window> windows; // list of windows
    //static int numberOfWindows; // number of windows :: consider removing since windows.size() serves this purpose
};

#endif // WINDOWSMANAGEMENTSERVICE_H