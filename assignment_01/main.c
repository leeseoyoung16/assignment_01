// 0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷� �ۼ�.
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
	printf("0���� 100������ �Ҽ����� �� = %d\n", sum);

	system("pause");
	return 0;
}
