# CMakeList.txt : CMake project for base_project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("base_project")

# Add source to this project's executable.
add_executable (base_project "base_project.cpp" "base_project.h" "CustomConsole.cpp"  "CustomConsole.h" "Services/TerminalService.h" "Services/FileService.h" "Services/SystemService.h" "Services/WindowManagementService.h" "Objects/Window.h" "Objects/Tile.h" "Objects/baseTab.h")

# TODO: Add tests and install targets if needed.
