# include <stdio.h>

/**
 * @brief 구구단 3x3 모양을 출력하시오(함수제출)
 * 입력: 
 * 출력: 구구단 3x3 모양 n*n=n를 출력한다.
 * @return int 
 */

int fn_mtable();

int main() {
    fn_mtable();

    return 0;
}

int fn_mtable() {

    for (int i=1; i<=9; i=i+3) {
        for (int j=1; j<=9; j++) {
            for (int k=i; k<=i+2; k++)
                printf("%d*%d=%d\t", k, j, j*k);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}