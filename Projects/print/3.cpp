#include <stdio.h>
#include <math.h>

main(void)
{
    int A;
    int B;

    scanf("%d", &A);
    scanf("%d", &B);

    if ((A>=1)&&(B<=10000))
    {
        printf("A+B = %d\n", A+B);
        printf("A-B = %d\n", A-B);
        printf("A*B = %d\n", A*B);
        printf("A/B = %d\n", A/B);
        printf("A%B = %d\n", A%B);
    }
    
    return 0;
}
