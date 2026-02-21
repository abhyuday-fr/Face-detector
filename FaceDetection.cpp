#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp> //new include
#include <iostream>

using namespace std;
using namespace cv;

//-----------Face Detection---------------

//we need haar cascades xml(s) for object detection
//to get haar cascade xmls visit site: https://github.com/opencv/opencv/tree/master/data/haarcascades


VideoCapture cap(0);
Mat img;

void main() {
	

	CascadeClassifier faceCascade;
	faceCascade.load("Resources/haarcascade_frontalface_default.xml");

	if (faceCascade.empty()) {
		cout << "XML file not loaded\n";
	}
	else {
		cout << "XML file loaded\n";
	}

	while (true) {
		cap.read(img);

		vector<Rect> faces; //bounding boxes
		faceCascade.detectMultiScale(img, faces, 1.1, 10); //image in which faces are there, scale factor, minimum neighbours

		//iterate through all the detected faces and go through them one by one
		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3); //.tl()-> top left, .br()-> bottom right to get the points needed to make the rectangle
			putText(img, "detected face " + to_string(i + 1), { faces[i].x, faces[i].y - 5 }, FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 0, 255), 2);
		}

		imshow("Image", img);
		waitKey(1);
	}
}