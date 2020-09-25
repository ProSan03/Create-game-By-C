#include <stdio.h>

int main() {
	int Input, Sum = 0;	// Sum을 초기화 하지 않으면 시작이 안됨.
	scanf_s("%d", &Input);

	if (Input < 10000)	// 10000이하의 정수
	{
		while (Input)
		{
			Sum += Input % 10;	// 10으로 나눈 나머지를 저장 Sum에 차곡차곡 저장함 ==> += 안하면 첫번째 반복 한 값만 저장됨
			Input /= 10;	
			
		/* 위의 Input을 10으로 반복해서 나눈 걸 저장함. 소수점은 생략되니(int형이라서) 3자리수가 2자리수 값이 됨 => 10^n개씩 나눈다는 느낌 */
		}
		printf("%d", Sum);	// 최종 출력
	}


	return 0;
}