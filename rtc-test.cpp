#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;

int main() {
	//VideoCapture capture(0);
	VideoCapture capture("http://10.0.0.7:8090/stream/video.mjpeg");
	unsigned long int c = 0;
    while (1) {
		if(!capture.isOpened()) std::cout << "ERROR\n";
		Mat frame;
		capture.read(frame);
        //std::cout << c;
		imshow("Camera", frame);
		waitKey(10);
        c++;
	}
	capture.release();
	return 0;
}
