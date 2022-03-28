# include <stdio.h>
# include <algorithm>

/**
* @brief 사용자에게 정수 N을 입력 받고 N개의 데이터를 저장하여 오름차순으로 출력하며 마지막에 가장 큰 수와 작은 수를 출력하시오(함수제출)
* 입력: N은 100보다 작은 정수
* 출력: 데이터는 1000보다 작은 정수
* @return int
*/

using namespace std;

int ascending_array(int n);

int main () {
int n;
printf("배열 크기 N값을 입력하시오 : ");
scanf("%d", &n);
ascending_array(n);
return 0;
}

int ascending_array(int n) {
int num_list[n];

if ((n > 0)&&(n<100)) {
for (int i=0; i<n; i++) {
printf("배열에 저장하고 싶은 숫자를 입력하시오 : ");
scanf("%d", &num_list[i]);
if (num_list[i]>=1000) {
printf("1000보다 작은 정수를 입력하시오\n");
continue;
}
}
sort(num_list, num_list+n);

for (int j=0; j<n; j++)
printf("%d ", num_list[j]);
printf("\n");
}
else
return main();
return 0;
}

//오름차순정렬함수, 배열출력법 search