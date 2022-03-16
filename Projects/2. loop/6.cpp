
#include <stdio.h>

/**
 * @brief 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 출력하는 프로그램을 작성하시오
 * 입력: 첫째 줄에 N(1 <= N <= 100)이 주어진다.
 * 출력: 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
 * @return int 
 */

int main ()
{
    int N;
    scanf("%d", &N);

    if ((N>=1) && (N<=100))
    {
        for (int i=0; i < N; i++)
        {
            for (int j=0; j < N; j++)
            {
               if (j <= i)
               { 
               printf("*");
               } 
            }
            printf("\n");
        }
        
    }
    else
    {
        printf("N을 다시 입력해주세요\n");
    }
    return 0;
}