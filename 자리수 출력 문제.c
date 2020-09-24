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

	printf("%d자리 수입니다.",Count);

	return 0;
}