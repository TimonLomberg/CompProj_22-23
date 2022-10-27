//
// Created by Beast GAMEING on 26.10.2022.
//

#include "CVIO.h"

#include <iostream>

namespace CVIO {

    Video::Video() : Video{cv::VideoCapture{0}} {

    }

    Video::Video(std::string const &path) : Video{cv::VideoCapture{path}} {

    }

    Video::Video(const cv::VideoCapture &video) : vid_capture{video},
                                                  fps{vid_capture.get(cv::CAP_PROP_FPS)},
                                                  frame_count{
                                                          static_cast<int>(vid_capture.get(cv::CAP_PROP_FRAME_COUNT))} {

        if (!vid_capture.isOpened()) {
            std::cout << "Error opening video file \n";
        } else {
            std::cout << "\n\nFPS: " << fps;
            std::cout << "   Frame count: " << frame_count << std::endl;
        }

    }


    bool Video::next(cv::OutputArray frame_out) {
        if (!vid_capture.isOpened()) {
            return false;
        }
        return vid_capture.read(frame_out);
    }


}

