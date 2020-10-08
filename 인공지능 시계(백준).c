#include <stdio.h>
#include <stdlib.h>

int main() {
	int Hour, Minute, Second, Plus;
	scanf_s("%d %d %d", &Hour, &Minute, &Second);
	scanf_s("%d", &Plus);

		// 더하는 값인 Plus가 60이 넘어가면 계속해서 -60을 해주고, 분을 더해주고 60보다 작으면 멈추게 설계
		while (1) {
			if (Plus > 59)
			{
				Plus -= 60;
				Minute++;
			}
			else
				break;
		}
		Second = Second + Plus;
		while (1) {
			if (Second > 59)
			{
				Second -= 60;
				Minute++;
			}
			else
			{
				int abs(Second);	// Second값을 절댓값으로 바꿔주는 함수
				break;
			}
		}
		while (1) {
			if (Minute > 59)
			{
				Minute -= 60;
				Hour++;
			}
			else
			{
				int abs(Minute);	
				break;
			}
		}
		while (1) {
			if (Hour > 23)
			{
				Hour -= 24;
			}
			else
			{
				int abs(Hour);	
				break;
			}
		}

	printf("%d %d %d", Hour, Minute, Second);

	return 0;
}