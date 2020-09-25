#include <stdio.h>
#include <math.h>

int main(){
		 
	int Input, Pront = 0, Back = 0, length = 0, num=0;
	scanf_s("%d", &Input);
	int Temp = Input;
	length = pow(10, num);
	// 순서: 자릿수 구하기 -> 절반 쪼갰을 때 뒷 부분 -> 절반 쪼갰을 때 앞 부분
	while (Temp >0) // 자리수 결국 Temp 값은 0이 됨. = 훼손됨.
	{
		Temp = Temp / 10;
	}
	// 중도에 걸리게 ==> Pront와 Back의 값이 0으로 수렴이 되지않게 ==> 아니면 0=0이 되므로 무조건 성립.
	
		// 뒷부분
	    for (num; Back > 0;num++)  // 뒷부분의 결과물 = Back
		{
			Back += (int) Input % 10;
			Back /= length;
		}
		// 앞부분
		for (num; Pront > 0; num++) // 앞부분의 결과물 = Pront
		{
			Pront += (int) Input / length;
		}

	printf("%d\n", Back);
	printf("%d\n", Pront);

	if (Pront == Back) // 이 부분 변형? 어짜피 0이랑 0이랑 수렴 됨 그런데 문제는 펠린드롬 판단 문제잖음 -> 0으로 수렴이 '끝'까지 되면 절대 안됨.
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}