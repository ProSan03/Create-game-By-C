#include <stdio.h>

int main(){
	int Year;
	scanf_s("%d", &Year);
	if (Year % 4 == 0 && Year % 100 != 0 && Year % 400 == 0);
	{
		printf("����");
	}
	


	return 0;
}