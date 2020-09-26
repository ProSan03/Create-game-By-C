#include <stdio.h>

int main() {
	int W_Score, Se_Score, Sang_Score, Soong_Score, Gang_Score;
	scanf_s("%d %d %d %d %d", &W_Score, &Se_Score, &Sang_Score, &Soong_Score, &Gang_Score);

	if (W_Score < 40)
	{
		W_Score = 40;
	}
	
	if (Se_Score < 40)
	{
		Se_Score = 40;
	}
	
	if (Sang_Score < 40)
	{
		Sang_Score = 40;
	}
	
	if (Soong_Score < 40)
	{
		Soong_Score = 40;
	}
	if (Gang_Score < 40)
	{
		Gang_Score = 40;
	}

	printf("%d", (W_Score + Se_Score + Sang_Score + Soong_Score + Gang_Score) / 5);

	return 0;
}