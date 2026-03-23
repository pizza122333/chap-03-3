#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
    // 1. 400x300 크기의 행렬 생성 및 초기색 흰색(255, 255, 255) 설정
    Mat img(300, 400, CV_8UC3, Scalar(255, 255, 255));

    int b, g, r;

    // 초기 상태의 흰색 창을 먼저 띄움
    imshow("Color Window", img);
    cout << "초기 상태: 흰색 배경" << endl;

    // 2. 사용자로부터 B, G, R 값 입력받기
    cout << "B값을 입력하라: ";
    cin >> b;
    cout << "G값을 입력하라: ";
    cin >> g;
    cout << "R값을 입력하라: ";
    cin >> r;

    // 3. setTo() 멤버 함수를 사용하여 입력받은 색상으로 변경
    // Scalar(b, g, r) 형태로 적용
    img.setTo(Scalar(b, g, r));

    // 4. 변경된 결과 출력
    imshow("Color Window", img);
    cout << "\n배경색이 변경되었습니다. (B:" << b << ", G:" << g << ", R:" << r << ")" << endl;
    cout << "아무 키나 누르면 종료합니다." << endl;

    waitKey(); // 사용자가 키를 누를 때까지 대기
    return 0;
}