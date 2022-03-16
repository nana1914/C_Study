#include <stdio.h>
/**
 * @brief N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성
 * 입력: 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 20보다 작거나 같다.
 * 출력: 출력형식과 같게 N*1부터 N*9까지 출력한다.
 * @return int 
 */
int main (void)
{
    int N;

    while (1)
    {
        scanf("%d", &N);
        if ((N>=1) && (N<=20))
        {
    
            for (int i=1; i<10; i++)
            {
                printf("%d * %d = %d\n", N, i, N*i);
            }
        }
        else if (N==0)
        {
            break;
        }
        else
        {
            printf("N의 범위를 벗어난 값입니다. 다시 입력해주세요.\n");
        }
    }
    return 0;
}