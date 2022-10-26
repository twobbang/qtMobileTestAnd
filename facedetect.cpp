#include "facedetect.h"
#include <QDebug>

//#include <iostream>
//#include <opencv2/opencv.hpp>
//#include <stdio.h>
//#include <opencv2/imgproc/types_c.h>

//using namespace std;
//using namespace cv;

FaceDetect::FaceDetect(QObject *parent) : QObject{parent}
{

}

void FaceDetect::callMeSlot()
{
    qDebug() << "I'm being called!!";




}

void FaceDetect::VideoStart()
{

}

/*
void FaceDetect::VideoStart()
{
    int a = 0;
    Mat img;
    VideoCapture capture(0);
    //VideoCapture capture("sample.mp4");

    if (!capture.isOpened()) {
        std::cerr << "Could not open camera" << std::endl;
        //return -1;
    }

    namedWindow("webcam", 1);
    CascadeClassifier face_classifier;

    //gpu::CascadeClassifier_GPU ada_gpu;

    face_classifier.load("haarcascade_frontalface_default.xml");

    Mat frame;

    while (1) {
        bool frame_valid = true;
        try {
            // get a new frame from webcam
            capture >> frame;
        }
        catch (Exception& e) {
            cerr << "Exception occurred. Ignoring frame... " << e.err << std::endl;
            frame_valid = false;
        }

        if (frame_valid) {
            try {
                Mat grayframe;
                cvtColor(frame, grayframe, CV_BGR2GRAY);
                equalizeHist(grayframe, grayframe);
                vector<Rect> faces;

                face_classifier.detectMultiScale(grayframe, faces,
                    1.1, // increase search scale by 10% each pass
                    3,   // merge groups of three detections
                    0 | CASCADE_SCALE_IMAGE,
                    Size(30, 30)
                );

                for (int i = 0; i < faces.size(); i++) {
                    Point lb(faces[i].x + faces[i].width, faces[i].y + faces[i].height);
                    Point tr(faces[i].x, faces[i].y);
                    rectangle(frame, lb, tr, Scalar(0, 255, 0), 3, 4, 0);
                }

                imshow("webcam", frame);
            }
            catch (Exception& e) {
                cerr << "Exception occurred. Ignoring frame... " << e.err << std::endl;
            }
        }

        if (waitKey(30) >= 0) break;
    }
    //return 0;
}

*/
