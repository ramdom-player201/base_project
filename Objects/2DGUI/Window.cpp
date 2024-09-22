#include "Window.h"
#include "windowParams.h"
#include <iostream>

// Default constructor (does nothing, should raise an error when used)
Window::Window()
	: id(0), params(params), isOpen(false){
	std::cout << "Empty window initialised: WARNING\n";
	windowParams defaultParams;
	defaultParams.width = 0;
	defaultParams.height = 0;
	defaultParams.title = "ERROR";
	defaultParams.type = defaultParams.errorWindow;
	params = defaultParams;
	std::cout << "Window data: width = " << params.width << ", height = " << params.height << ", title = " << params.title << std::endl;
}

// Constructor
Window::Window(int id, const windowParams& params)
	: id(id), params(params), isOpen(true) {
	std::cout << "Window created: " << params.title << " (ID: " << id << ")\n";
	std::cout << "Window data: width = " << params.width << ", height = " << params.height << ", title = " << params.title << std::endl;
}

// Get the window ID
int Window::getId() const {
	return id;
}

std::string Window::getTitle() const {
	return params.title;
}

// Close the window
void Window::close() {
	if (isOpen) {
		std::cout << "Closing window:" << params.title << " (ID: " << id << ")\n";
	}
	else {
		std::cout << "Window already closed: " << params.title << " (ID: " << id << "\n";
	}
}