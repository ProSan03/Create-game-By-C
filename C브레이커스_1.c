	#include <stdio.h>

	int main(){
	
		int A, B, C;
		scanf_s("%d%d%d", &A, &B, &C);
		for (int i = 0; i<10; i++){
			int count = 0;
			for (int temp = A*B*C; temp > 0; temp /= 10){
				if (temp % 10 == i)
					count++;
			}
			printf("%d\n", count);
		}
		return 0;
	}