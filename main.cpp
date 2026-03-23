#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
    // 1. 400x300 크기, Blue 색상(255, 0, 0)으로 초기화
    Mat imgBlue(300, 400, CV_8UC3, Scalar(255, 0, 0));

    // 2. 400x300 크기, Green 색상(0, 255, 0)으로 초기화
    Mat imgGreen(300, 400, CV_8UC3, Scalar(0, 255, 0));

    // 3. 400x300 크기, Red 색상(0, 0, 255)으로 초기화
    Mat imgRed(300, 400, CV_8UC3, Scalar(0, 0, 255));

    // 각 Mat 객체를 별도의 창에 출력
    imshow("Blue Window", imgBlue);
    imshow("Green Window", imgGreen);
    imshow("Red Window", imgRed);

    // 키 입력이 있을 때까지 대기 (창이 바로 닫히지 않게 함)
    waitKey();

    return 0;
}