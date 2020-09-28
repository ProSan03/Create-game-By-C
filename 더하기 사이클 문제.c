#include <stdio.h>

int main() {
	int Number, F_Num, S_Num, Count = 0, Ori, N_Num = 0;
	scanf_s("%d", &Number);
	Ori = Number;

	if (0 <= Number && Number <= 99)
	{
		while(1)
		{
			F_Num = Number / 10;	
			S_Num = Number % 10;	
			Number = F_Num + S_Num;
			if (Number >= 10)
			{
				N_Num = Number % 10;
				Number = S_Num * 10 + N_Num;
			}
			else 
			{
				Number = S_Num * 10 + Number;
			}
			if (Number == Ori) 
			{
				break;
			}
		}
		Count++;
		}
		printf("%d", Count);
		return 0;
}
