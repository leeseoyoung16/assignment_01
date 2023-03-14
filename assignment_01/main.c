// 0부터 100까지의 숫자 중에서 소수들 만의 합을 구하는 프로그램 작성.
#include<stdio.h>
#include<stdlib.h>

int main() {
	int sum = 0;
	int i, j;
	int n = 0;
	for (i = 0; i <= 100; i++) {
		if (i < 2) {
			n = 1;
		}
		else {
			for (j = 2; j < i; j++) {
				if (i % j == 0) {
					n = 1;

				}
			}
			if (n == 0) {
				sum += i;

			}
		}

		n = 0;
	}
	printf("0부터 100까지의 소수들의 합 = %d\n", sum);

	system("pause");
	return 0;
}
