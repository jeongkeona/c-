// 20221102_jka_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h> 

int Add(int num1, int num2); //선언
int Sub(int num1, int num2); //선언
int Multi(int num1, int num2); //선언
double Div(int num1, int num2); //선언
void ShowAddResult(int num);
int ReadNum(void);
void HowToUseThisProg(void);
void NoReturnType(int num);
int main()
{
    int num1, num2;
    int num1 = 10, num2 = 5;
    data = printf("test\n");
    /*num1 = printf("12345\n");
    num2 = printf("I love my home\n");
    printf(" %d %d \n", num1, num2);*/
    printf("%d\n", Add(num1, num2));
    printf("%d\n", Sub(num1, num2));
    printf("%d\n", Multi(num1, num2));
    printf("%lf\n", Div(num1, num2));
    
    printf("%d\n", ReadNum());
    HowToUseThisProg();
    return 0;
}

int Add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int Sub(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

int Multi(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}

double Div(int num1,int num2)
{
    double result = (double)num1 / (double)num2;
    return result;
}

void ShowAddResult(int num)
{
    printf("덧셈결과 출력: %d \n", num);
}
int ReadNum(void)
{
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과를 출력합니다. \n");
    printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}
void NoReturnType(int num)
{
    if (num < 0)
        return;
    else(printf("양수입니다 \n", num));
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
