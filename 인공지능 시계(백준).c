#include <stdio.h>
#include <stdlib.h>

int main() {
	int Hour, Minute, Second, Plus;
	scanf_s("%d %d %d", &Hour, &Minute, &Second);
	scanf_s("%d", &Plus);

		// ���ϴ� ���� Plus�� 60�� �Ѿ�� ����ؼ� -60�� ���ְ�, ���� �����ְ� 60���� ������ ���߰� ����
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
				int abs(Second);	// Second���� �������� �ٲ��ִ� �Լ�
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