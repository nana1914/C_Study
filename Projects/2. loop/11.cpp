# include <stdio.h>
/**
 * @brief 구구단 3x3 모양을 출력하시오(함수제출)
 * 입력: N단 출력, 1줄에 M단까지 출력
 * 출력: 구구단 3x3 모양 n*n=n를 출력한다.
 * @return int
 */

int fn_mtable_2(int n, int m);

int main() {
   
    int n,m;

    printf("N값을 입력해주세요 : ");
    scanf("%d", &n);

    printf("M값을 입력해주세요 : ");
    scanf("%d", &m);

    fn_mtable_2(n, m);

    return 0;
}

int fn_mtable_2(int n, int m) {
    for (int i=1; i<=n; i=i+m) {
        for (int j=1; j<=9; j++) {
            for (int k=i; k<i+m; k++) {
                if (k>n) break;
                printf("%d*%d=%d\t", k, j, j*k);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}