#include <stdio.h>
/**
 * @brief 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, 1번째 줄에는 별 1개를 출력하는 프로그램을 작성하시오(함수제출)
 * 입력: 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 출력: 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
 * @return int 
 */

int fn_triangle (int N);

int main() {
    int N;
    scanf("%d", &N);
    return (fn_triangle(N)!=0)? -1:0;
}

int fn_triangle (int N) {
    if((N>=1) && (N<=100)) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<i; j++)
                printf(" ");
            for(int k=N; k>i; k--)
                printf("*");
        printf("\n");
        }
    }
    return 0;
}

/* 수정 전
int fn_triangle (int N)
{
    if((N>=1) && (N<=100)) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<i; j++)
                printf(" ");
            for(int k=N; k>i; k--)
                printf("*");
        printf("\n");
        }
    }
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);
    fn_triangle(N);
    return 0;
}*/

