#include <stdio.h>

int main() {
	int Hour, Minute, Minus = 45;
	scanf_s("%d %d", &Hour, &Minute);
	if (0 <= Hour && Hour <= 23 && 0 <= Minute && Minute<= 59)
	{
		if (Minute < Minus)
		{
			if (Hour == 0)
			{
				Hour = 24;
				printf("%d ", Hour - 1);
				printf("%d", 60 + Minute - 45);
			}
			else 
			{
				printf("%d ", Hour - 1);
				printf("%d", 60 + Minute - 45);
			}
		}
		else
		{
			printf("%d ", Hour);
			printf("%d", Minute - 45);
		}
	}
	else
	{
		printf("�˶� �Է¿� �����߽��ϴ�.\n");
	}

	return 0;
}