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
		printf("0�� 12������ ���� �Է��Ͽ� �ֽʽÿ�.\n");
	}
}