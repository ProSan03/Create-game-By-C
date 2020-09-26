#include <stdio.h>

int main() {
	int A, B, Sum=0;
	scanf_s("%d %d", &A, &B);

	while (A < 0, B < 10)
	{
		if (A == 0 && B == 0)
		{
			break;
		}
		printf("%d\n", A+B);
		scanf_s("%d %d", &A, &B);
	}
}