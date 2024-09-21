#include <iostream>
#include "CustomConsole.h"

void CustomConsole::print() {
	std::cout << "Hello from console" << std::endl;
	// basic print message, adds new line
}

void CustomConsole::printColoured() {
	std::cout << "Hello from console" << std::endl;
	// print message in a defined colour
}

void CustomConsole::log(const std::string& message) {
	std::cout << "[LOG]: " << message << std::endl;
	// log a message to a stored file
}