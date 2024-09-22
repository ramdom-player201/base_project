# CMakeList.txt : CMake project for base_project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("base_project")

# Add source to this project's executable.
add_executable (base_project "base_project.cpp" "base_project.h" "CustomConsole.cpp"  "CustomConsole.h" "Services/TerminalService.h" "Services/FileService.h" "Services/SystemService.h" "Services/WindowManagementService.h" "Objects/2DGUI/Window.h" "Objects/2DGUI/Tile.h" "Objects/2DGUI/baseTab.h" "Services/WindowManagementService.cpp" "Objects/2DGUI/windowParams.h" "Objects/2DGUI/Window.cpp" "Objects/2DGUI/windowParams.cpp")

# TODO: Add tests and install targets if needed.
