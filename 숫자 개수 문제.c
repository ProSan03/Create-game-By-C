#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c, mul, temp, len = 0;
    int arr[100], cnt[10] = { 0 };

    scanf_s("%d %d %d", &a, &b, &c);
    mul = a * b * c;

    while (1) {
        temp = mul / pow(10, len);
        if (temp == 0) {
            break;
        }
        len++;
    }

    for (int i = 0; i < len; i++) {
        arr[i] = mul / (int)pow(10, (len - i) - 1);
        if (arr[i] >= 10) {
            arr[i] = arr[i] % 10;
        }
    }

    for (int i = 0; i < len; i++) {
        cnt[arr[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", cnt[i]);
    }
    return 0;
}