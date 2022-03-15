#include <stdio.h>

main (void)
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
        else
        {
            printf("N의 범위를 벗어난 값입니다. 다시 입력해주세요.\n");
        }
    }
    return 0;
}