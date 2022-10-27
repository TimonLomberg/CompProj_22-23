//
// Created by Beast GAMEING on 26.10.2022.
//

#include "GLMain.h"

#include <stdexcept>

#include "Common.h"
#include "Window.h"

namespace ogl {

    GlMain gl_main;

    void GlMain::init() {

        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        gl_main.window = ogl::Window{800, 600, "EndlessRunner (Working Title)"};

        glfwMakeContextCurrent(gl_main.window.getPtr());
        glfwSwapInterval(0);
        glfwSetInputMode(gl_main.window.getPtr(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);

        if(!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
            throw std::runtime_error("Failed to initialize GLAD");
        }

        glViewport(0,0,800,600);
        glfwSetFramebufferSizeCallback(gl_main.window.getPtr(), Window::framebufferSizeCallback);
        glfwSetCursorPosCallback(gl_main.window.getPtr(), Window::mousePosCallback);
    }
}


