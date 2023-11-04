#include <stdio.h>
#include <string.h>

int isPalindrom(char* mystr) {
    int len = strlen(mystr);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (mystr[i] != mystr[len - 1 - i]) {
            return 0; // 거꾸로 해도 같지 않으면 0 반환
        }
    }
    return 1; // 거꾸로 해도 같으면 1 반환
}

int main() {
    char input[100]; // 충분한 크기의 배열 선언

    scanf("%s", input);

    if (isPalindrom(input)) {
        printf("응 맞아.\n");
    } else {
        printf("응 아니야.\n");
    }

    return 0;
}

