#include <stdio.h>
#include <math.h>

int main(){
		 
	int Input, Pront = 0, Back = 0, length = 0, num=0;
	scanf_s("%d", &Input);
	int Temp = Input;
	length = pow(10, num);
	// ����: �ڸ��� ���ϱ� -> ���� �ɰ��� �� �� �κ� -> ���� �ɰ��� �� �� �κ�
	while (Temp >0) // �ڸ��� �ᱹ Temp ���� 0�� ��. = �Ѽյ�.
	{
		Temp = Temp / 10;
	}
	// �ߵ��� �ɸ��� ==> Pront�� Back�� ���� 0���� ������ �����ʰ� ==> �ƴϸ� 0=0�� �ǹǷ� ������ ����.
	
		// �޺κ�
	    for (num; Back > 0;num++)  // �޺κ��� ����� = Back
		{
			Back += (int) Input % 10;
			Back /= length;
		}
		// �պκ�
		for (num; Pront > 0; num++) // �պκ��� ����� = Pront
		{
			Pront += (int) Input / length;
		}

	printf("%d\n", Back);
	printf("%d\n", Pront);

	if (Pront == Back) // �� �κ� ����? ��¥�� 0�̶� 0�̶� ���� �� �׷��� ������ �縰��� �Ǵ� �������� -> 0���� ������ '��'���� �Ǹ� ���� �ȵ�.
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}