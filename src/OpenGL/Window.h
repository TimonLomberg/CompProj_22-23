//
// Created by Beast GAMEING on 26.10.2022.
//

#ifndef SEMESTERPROJEKT_22_23_WINDOW_H
#define SEMESTERPROJEKT_22_23_WINDOW_H

#include <string>
#include <OpenGL/Common.h>

namespace ogl {

    struct Window {
    private:
        GLFWwindow *window_ptr;

    public:
        Window(int width, int height, const std::string& title);
        Window() = default;
        GLFWwindow* getPtr();

        static void framebufferSizeCallback(GLFWwindow *window, int width, int height);
        static void mousePosCallback(GLFWwindow *window, double xPos, double yPos);
    };

}

#endif //SEMESTERPROJEKT_22_23_WINDOW_H
