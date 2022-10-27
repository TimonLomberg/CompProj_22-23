#include <iostream>
#include <opencv2/opencv.hpp>
#include "OpenCV/CVIO.h"
#include "OpenGL/GLMain.h"

using namespace ogl;

int main() {

    /*
    auto img = cv::imread("resources/image/demo_img.jpg", cv::ImreadModes::IMREAD_GRAYSCALE);

    cv::imshow("Grayscale CVIO", img);

    cv::waitKey(0);

    cv::destroyAllWindows();

    cv::imwrite("out/processed.jpg", img);


    CVIO::Video vid;


    while (vid.next(img)) {
        cv::imshow("Demo Video", img);
        int key = cv::waitKey(static_cast<int>(1.0/vid.fps*1000));
        if(key == 27) {
            std::cout << "Q pressed by user. Stopping video \n";
            break;
        }
    }
    cv::destroyAllWindows();
    */

    GlMain::init();

    return 0;
}
