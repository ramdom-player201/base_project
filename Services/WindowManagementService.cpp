#include <iostream>
#include "WindowManagementService.h"
//#include "../Objects/2DGUI/windowParams.h"
#include "../Objects/2DGUI/Window.h"
#include <vector>
#include <algorithm>

// static vector stores all windows, initialise from header?
///////////static std::vector<Window> windows;
///////////std::vector<Window> WindowManagementService::windows;
std::unordered_map<int, Window> WindowManagementService::windows;
//int WindowManagementService::numberOfWindows = 0; // initialise window count at 0

//create and return a window with the requested parameters, also storing it in the vector
Window WindowManagementService::createWindow(const windowParams& params) {
	std::cout << "creating window WIP. Current count at: " << windows.size() << std::endl;
	if(windows.size()>=MAX_WINDOWS) {
		std::cerr << "Error: Cannot create more than " << MAX_WINDOWS << " windows.\n";
		return Window(); // throw exception if needed
	}
	//int newWindowId = windows.size() + 1; // generate new window ID based on current number of windows
	//int id = WindowManagementService::getWindowCount() + 1; // create new window ID based on current number of windows
	int id = 1;
	while (windows.find(id) != windows.end()) {
		id++;
	}
	Window newWindow(id, params); // create new window objects
	//windows.push_back(newWindow); // store window in vector
	windows[id] = newWindow;
	//numberOfWindows++;
	std::cout << "Window with ID " << id << " created. Total windows: " << windows.size() << std::endl;
	return newWindow; // return new window
}

// return the window with the requested ID
Window* WindowManagementService::getWindow(int id) {
	std::cout << "getting window WIP" << std::endl;

	auto it = windows.find(id);
	if (it != windows.end()) {
		return &it->second;
	}
	std::cerr << "Error: Window with ID " << id << " not found.\n";
	return nullptr;

	//// use std::find_if to search for the window by its ID
	//auto it = std::find_if(windows.begin(), windows.end(), [id](const Window& win) {
	//	return win.getId() == id;
	//});
	//// if window found, return. Else, return an error_state window and log an error
	//if (it != windows.end()) {
	//	return *it;
	//}
	//else {
	//	throw std::runtime_error("Window with requested id could not be located");
	//}
}

// return a list of all windows
std::unordered_map<int,Window> WindowManagementService::getAllWindows() {
	std::cout << "getting all windows WIP.\n";
	return windows;
}

// close the requested window and remove it from windows list
void WindowManagementService::closeWindow(int id) {
	std::cout << "Closing window with ID: " << id << std::endl;

	auto it = windows.find(id);
	if (it != windows.end()) {
		it->second.close(); // call close function
			windows.erase(it); // remove window from map
			//numberOfWindows--;
	}
	else {
		std::cerr << "Error: Window with ID " << id << " not found.\n";
	}
}

// close all windows WIP
void WindowManagementService::closeAllWindows() {
	std::cout << "closing all windows WIP\n";
	for (auto& pair : windows) {
		pair.second.close(); // call close on each window
	}
	windows.clear(); // clear map
	//numberOfWindows = 0;
	std::cout << "All windows closed.\n";
}

// return number of windows
int WindowManagementService::getWindowCount() {
	return static_cast<int>(windows.size());
	// warning, size_t to int; possible loss of data :: there is already a limit in place, and that limit is not expected to be high enough to cause any issues
}