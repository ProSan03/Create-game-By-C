#include <stdio.h>
#include <math.h>

int main(){

	int num, Count = 0;
	scanf_s("%d", &num);

	while (num > 0)
	{
	
		num = num / 10;
		Count++;
	}

	printf("%d�ڸ� ���Դϴ�.",Count);

	return 0;
}