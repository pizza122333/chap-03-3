#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
    // 1. 400x300 크기의 3채널 행렬 생성 (초기값은 Blue로 설정)
    Mat img(300, 400, CV_8UC3, Scalar(255, 0, 0));

    // 2. 순환할 색상들을 배열로 저장 (Blue -> Green -> Red)
    Scalar colors[] = { Scalar(255, 0, 0), Scalar(0, 255, 0), Scalar(0, 0, 255) };
    int idx = 0;

    cout << "배경색 전환 시작 (종료하려면 'q'를 누르세요)" << endl;

    // 3. 무한 반복문 (반복문은 단 하나만 사용)
    while (true) {
        // 현재 인덱스에 해당하는 색상으로 배경 설정
        img.setTo(colors[idx]);

        // 화면에 출력
        imshow("Color Animation", img);

        // 인덱스를 0 -> 1 -> 2 순으로 순환
        idx = (idx + 1) % 3;

        // 1000ms(1초) 대기하며 키 입력 확인
        int key = waitKey(1000);

        // 'q' 키(ASCII 113)를 누르면 루프 종료
        if (key == 'q' || key == 'Q') {
            break;
        }
    }

    destroyAllWindows();
    return 0;
}