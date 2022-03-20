#include <stdio.h>
/**
 * @brief 사용자에게 높이를 입력 받아 피라미드 모양을 출력하시오(함수제출)
 * 입력: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 출력: *로 이루어진 N높이의 피라미드를 출력한다.
 * @return int 
 */
int fn_pyramid(int N);

int main() {
    int N;

    printf("N의 값을 입력하시오 : ");
    scanf("%d", &N);

    fn_pyramid(N);

    return 0;
}

int fn_pyramid(int N) {
    if ((N>=1)&&(N<=100)) {
        for (int i=0; i<N; i++) {
            for (int j=N-1; j>i; j--)
            printf(" ");
            for (int k=0; k<(2*i)+1; k++)
            printf("*");
        printf("\n");
        }
    }
    else {
        printf("N을 다시 입력해주세요 \n");
        return main();
    }
    return 0;
}
맨위로

