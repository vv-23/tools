#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;

int main() {
    cv::VideoCapture capture(0);
    while (1) {
        if (!capture.isOpened()) cout << "ERROR\n";
        else {
            cv::Mat frame;
            capture >> frame;
            cv::imshow("Camera", frame);
            cv::waitKey(10);
        }
    }
    return 0;
}