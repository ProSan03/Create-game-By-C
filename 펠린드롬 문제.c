#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
    char input[5];
    int count = 0;

    while (1) {
        scanf("%s", input);

        if (input[0] == '0') {
            break;
        }

        for (int i = 0; i < strlen(input); i++) {
            if (input[i] == input[strlen(input) - (i + 1)]) {
                count++;
            }
            else {
                printf("No\n");
                break;
            }
        }
        if (strlen(input) == 1) {
            printf("Yes\n");
        }
        else if (count > strlen(input) / 2) {
            printf("Yes\n");
        }
        count = 0;
    }
    return 0;
}