#include <stdio.h>

int main() {
	int Fixed_Money, Variable_Money, Plus_Point;
	scanf_s("%d %d %d", &Fixed_Money, &Variable_Money, &Plus_Point);

	if (Variable_Money >= Plus_Point)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", Fixed_Money / (Plus_Point - Variable_Money) + 1);
	}
	return 0;
	
}