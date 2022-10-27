//
// Created by Beast GAMEING on 26.10.2022.
//

#ifndef SEMESTERPROJEKT_22_23_CVIO_H
#define SEMESTERPROJEKT_22_23_CVIO_H

#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>

namespace CVIO {

    struct Image {

    };

    struct Video {

    private:
        cv::VideoCapture vid_capture;

    public:
        double fps;
        int frame_count;


    public:

        Video();
        explicit Video(const cv::VideoCapture& video);
        explicit Video(const std::string& path);


        bool next(cv::OutputArray frame_out);
    };


}



#endif //SEMESTERPROJEKT_22_23_CVIO_H
