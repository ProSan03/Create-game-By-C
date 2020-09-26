#include <stdio.h>

int main() {
	int Year;
	scanf_s("%d", &Year);
	
	if (Year >= 1&&Year <=4000&&Year % 4 == 0 && Year % 100 !=0 || Year % 400 == 0)
	{
		printf("1");
	}
	else 
	{
		printf("0");
	}



	return 0;
}