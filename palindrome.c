#include <stdio.h>
#include <string.h>
int main() {
    int i, length, flag = 0;
    char word[20];

    printf("Enter a String: ");
    scanf("%s", word);

    length = strlen(word);

    for (i = 0; i < length; i++) {
        if (word[i] != word[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
