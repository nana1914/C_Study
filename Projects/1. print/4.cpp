#include <stdio.h>
#include <math.h>

main (void)
{
    
    for (int i=0; i<8; i++)
    {
        int N;
        scanf("%d", &N);

        if ((N>=1) && (N<10))
        {
            printf("2 * 1 = %d\n", N);
        }
    }
    return 0;
}