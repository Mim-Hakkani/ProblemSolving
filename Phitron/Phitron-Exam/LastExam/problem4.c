#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[6];
        scanf("%s", str);
        int len = strlen(str);

        for (int i = len - 1; i >= 0; i--) {
            int num = str[i] - '0';
            if (num > 0 && num <= 9) {
                printf("%c", 'A' + (num - 1));
            }
        }
        printf("\n");
    }

    return 0;
}



