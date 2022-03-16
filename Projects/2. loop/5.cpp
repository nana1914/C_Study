#include <stdio.h>

/**
 * @brief 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성
 * 입력: 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
 * 출력: 첫째 줄부터 N번째 줄까지 차례대로 출력한다.
 * @return int 
 */

int main ()
{
    int N;
    scanf("%d", &N);

    if (N<=100000)
    {
        for (int i=1; i<=N; i++)
        {
            printf("%d\n", i);
        }
    }
    
    else
    {
        printf("N을 다시 입력해주세요\n");
    }

    return 0;
}