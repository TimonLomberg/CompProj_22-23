//
// Created by Beast GAMEING on 26.10.2022.
//

#include "Window.h"

#include <iostream>
#include <stdexcept>

ogl::Window::Window(int width, int height, std::string const &title) :
    window_ptr{glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr)} {

    if(window_ptr == nullptr) {
        glfwTerminate();
        throw std::runtime_error("Failed to create window");
    }

}

GLFWwindow *ogl::Window::getPtr() {
    return window_ptr;
}

void ogl::Window::framebufferSizeCallback(GLFWwindow *window, int width, int height) {
    glViewport(0,0,width,height);
}

void ogl::Window::mousePosCallback(GLFWwindow *window, double xPos, double yPos) {

}
