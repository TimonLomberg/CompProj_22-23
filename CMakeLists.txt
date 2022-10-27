cmake_minimum_required(VERSION 3.21)
project(SemesterProjekt_22_23)

set(CMAKE_CXX_STANDARD 14)

add_executable(SemesterProjekt_22_23 src/main.cpp src/OpenCV/CVIO.cpp src/OpenGL/Common.h src/OpenGL/GLMain.cpp src/OpenGL/GLMain.h src/OpenGL/Window.cpp src/OpenGL/Window.h src/OpenGL/Input.cpp src/OpenGL/Input.h)


find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(Stb REQUIRED)
find_package(glm REQUIRED)

find_package(OpenCV REQUIRED COMPONENTS core imgproc video highgui)

target_link_libraries(SemesterProjekt_22_23 PUBLIC glfw glad::glad glm::glm opencv_core opencv_imgproc opencv_video opencv_highgui)


#target_compile_options(SemesterProjekt_22_23 PRIVATE /W4)

target_include_directories(SemesterProjekt_22_23 PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>")

