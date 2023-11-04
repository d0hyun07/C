#include <stdio.h>
#include <string.h>

int isPalindrom(char* mystr) {
    int len = strlen(mystr);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (mystr[i] != mystr[len - 1 - i]) {
            return 0; // �Ųٷ� �ص� ���� ������ 0 ��ȯ
        }
    }
    return 1; // �Ųٷ� �ص� ������ 1 ��ȯ
}

int main() {
    char input[100]; // ����� ũ���� �迭 ����

    scanf("%s", input);

    if (isPalindrom(input)) {
        printf("�� �¾�.\n");
    } else {
        printf("�� �ƴϾ�.\n");
    }

    return 0;
}

