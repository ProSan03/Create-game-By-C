#include<stdio.h>

int main() {
	int Number, Sum=0, one_to_Number;
	scanf_s("%d", &Number);
	if (1 <= Number && Number <= 10000)
	{
		for (one_to_Number = 1; one_to_Number <= Number; one_to_Number++)
		{
			Sum += one_to_Number;
		}
		printf("%d", Sum);
	}
	else
	{
		printf("1~10000 사이의 수를 입력하여주십시오. \n");
	}
	return 0;
}