#include <stdio.h>

int main() {
	int One_to_Nine, Dan;
	scanf_s("%d", &Dan);

	for (One_to_Nine = 1; One_to_Nine < 10; One_to_Nine++)
	{
		printf("%d * %d = %d", Dan, One_to_Nine, Dan * One_to_Nine);
		printf("\n");
	}
	
	return 0;
}