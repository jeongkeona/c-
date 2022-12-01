// 20221201_jka_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h> 
int find_max(int c, int d, int e);
int find_min(int f, int g, int h);
double find_min_double(double d, double e, double f);
double find_max_double(double c, double d, double e)

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0, min = 0;
    int random_number = 0;
    int i = 0 , input = 0;
    int median_value = 0;
    double sum = 0.0, avg = 0.0;
    double dist1 = 0.0, dist2 = 0.0, dist3 = 0.0;
    double min_d = 0.0;
    double max_d = 0.0;
    scanf("%d %d %d", &a, &b, &c);

    max = (a > max) ? a : max;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    min = (a < min) ? a : min;
    min = (b < min) ? b : min;
    min = (c < min) ? c : min;

    printf("max : %d min : %d\n", max, min);
    return 0;
    avg = sum / 10;
    printf("sum = %6.3;f | average = 6.3lf\n", sum, avg);

    dist1 = fabs(a - avg); dist2 = fabs(b - avg); dist3 = fabs(c - avg);
    printf("% 6.3lf % 6.3lf % 6.3lf\n", dist1, dist2, dist3);

    min_d = find_min_double(dist1, dist2, dist3);
    printf("%d6.3lf\n,min_d");

    max_d = find_max_double(dist1, dist2, dist3);
    printf("%d6.3lf\n,max_d");
    if (min_d == dist1)
    {
        printf("중간값은 %d", a);
        median_value = a;
    }
    if (min_d == dist2)
    {
        printf("중간값은 %d", b);
        median_value = b;
    }
    if (min_d == dist3)
    {
        printf("중간값은 %d", c);
        median_value = c;
    }
    random_number = rand() % (max - min + 1) + min;
    for (i = 0; i < 10; i++)
    {
        printf("중간값을 맞추세요 ");
        scanf("%d", &input);
        if (random_number > input)
        {
            printf("입력된 숫자의 값이 랜덤 값 보다 작습니다 \n");
        }
        else if (random_number < input)
        {
            printf("입력된 수는 랜덤 숫자보다 큽니다 \n");
        }
        else
        {
            printf("입력된 수는 랜덤 숫자와 같습니다 \n");
            return 0;
        }
    }
    printf("정답을 못 맞추었습니다.");
}
int find_max(int c, int d, int e)
{
    int max = 0;

    max = (c > max) ? c : max;
    max = (d > max) ? d : max;
    max = (e > max) ? e : max;

    return max;
}
int find_min(int f, int g, int h)
{
    int min = 0;

    min = (f < min) ? f : min;
    min = (g < min) ? g : min;
    min = (h < min) ? h : min;

    return min;
}
int find_median(int i, int j, int k)//중간값 찾기
{
    int max = find_max(i, j, k);
    int min = find_min(i, j, k);
    int median = 0;
    if ((i != max) && (i != min))
    {
        median = i;
        return median;
    }
    if ((j != max) && (j != min))
    {
        median = j;
        return median;
    }
    if ((k != max) && (k != min))
    {
        median = k;
        return median;
    }
    return median;
}
double find_min_double(double d, double e, double f)
{
    double min = d;
    min = (d < min) ? d : min;
    min = (e < min) ? e : min;
    min = (f < min) ? f : min;
    return min;
}
double find_max_double(double c, double d, double e)
{
    double max = 0;

    max = (c > max) ? c : max;
    max = (d > max) ? d : max;
    max = (e > max) ? e : max;

    return max;
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
