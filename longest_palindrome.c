#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, left, right;
    int max = 1, start = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i; j < strlen(str); j++) {

            left = i;
            right = j;

            while (left < right && str[left] == str[right]) {
                left++;
                right--;
            }

            if (left >= right && j - i + 1 > max) {
                max = j - i + 1;
                start = i;
            }
        }
    }

    printf("Longest Palindromic Substring: ");

    for (i = start; i < start + max; i++) {
        printf("%c", str[i]);
    }

    return 0;
}