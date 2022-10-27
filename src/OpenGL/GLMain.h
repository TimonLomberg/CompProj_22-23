//
// Created by Beast GAMEING on 26.10.2022.
//

#ifndef SEMESTERPROJEKT_22_23_GLMAIN_H
#define SEMESTERPROJEKT_22_23_GLMAIN_H

#include "Window.h"

namespace ogl {

    struct GlMain {

    private:

       ogl::Window window;


    public:

        static void init();

    };

    extern GlMain gl_main;

}

#endif //SEMESTERPROJEKT_22_23_GLMAIN_H
