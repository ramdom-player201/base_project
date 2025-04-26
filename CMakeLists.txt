# CMakeList.txt : CMake project for base_project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("base_project")

# Add source to this project's executable.
add_executable (base_project "base_project.cpp" "base_project.h" "CustomConsole.cpp"  "CustomConsole.h" "Services/TerminalService.h" "Services/FileService.h" "Services/SystemService.h" "Services/WindowManagementService.h" "Objects/2DGUI/Window.h" "Objects/2DGUI/Tile.h" "Objects/2DGUI/baseTab.h" "Services/WindowManagementService.cpp" "Objects/2DGUI/windowParams.h" "Objects/2DGUI/Window.cpp" "Objects/2DGUI/windowParams.cpp" "Objects/Unimplemented/Point.h" "Objects/Unimplemented/Surface.h" "Objects/Unimplemented/Line.h" "Objects/Unimplemented/Origin.h" "Objects/Unimplemented/BaseObject.h")

# TODO: Add tests and install targets if needed.


find_package(SFML COMPONENTS Network Graphics Window Audio System CONFIG REQUIRED)
target_link_libraries(base_project PRIVATE SFML::Network SFML::Graphics SFML::Window SFML::Audio SFML::System)
# If you want SFML to provide an implementation of main():
# target_link_libraries(main PRIVATE SFML::Main)
