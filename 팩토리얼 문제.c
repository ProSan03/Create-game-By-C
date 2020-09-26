#include <stdio.h>

int main() {
	int Number, Count, Result = 1;
	scanf_s("%d", &Number);

	if (0 <= Number && Number <= 12)
	{
		for (Count = 1; Count <= Number; Count++)
		{
			Result *= Count;
		}
		printf("%d", Result);
	}
	else
	{
		printf("0과 12사이의 수를 입력하여 주십시오.\n");
	}
}