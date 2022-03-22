#include <stdio.h>
/**
 * @brief 사용자에게 높이를 입력 받아 다이아몬드 모양을 출력하시오(함수제출)
 * 입력: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 출력: *로 이루어진 N높이의 다이아몬드를 출력한다.
 * @return int 
 */
int fn_diamond(int N);

int main() {
    int N;

    printf("N의 값을 입력하시오 : ");
    scanf("%d", &N);

    fn_diamond(N);

    return 0;
}

int fn_diamond(int N) {
     if ((N >= 1) && (N <= 100)) {
        for (int i = 0; i <= N/2; i++) {
            for (int j = (N/2) - 1; j >= i; j--)
                printf(" ");
            for (int k = 0; k < (2 * i) + 1; k++)
                printf("*");
            printf("\n");
        }

        for (int i = 0; i < N/2; i++){
            for (int j = 0; j <= i; j++)
                printf(" ");
            for (int k = 0; k < 2 * ((N/2) - i) - 1; k++)
                printf("*");
            printf("\n");
        }
    }

   /* if ((N>=1)&&(N<=100)) {
        for (int i=0; i<N; i++) {
            for (int j=N-1; j>i; j--) //조건 가변적
            printf(" ");
            for (int k=0; k<(2*i)+1; k++)
            printf("*");
        printf("\n");
        }

        for (int i=1; i<N; i++) { // 1 234
            for (int j=1; j<=i; j++) //조건 가변적
            printf(" ");
            for (int k=10; k>(2*i)+1; k--) 

            printf("*");
        printf("\n");
        }

    }*/
    else {
        printf("N을 다시 입력해주세요 \n");
        return main();
    }
    return 0;
}