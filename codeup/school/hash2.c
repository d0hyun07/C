#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define KEY_SIZE 10
#define TABLE_SIZE 13

#define empty(item) (strlen(item.key) == 0)
#define equal(item1, item2) (strcmp(item1.key, item2.key) == 0)

typedef struct {
    char key[KEY_SIZE];
} element;

element hash_table[TABLE_SIZE];

void init_table(element ht[]) {
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        ht[i].key[0] = '\0';
    }
}

int transform(char *key) {
    int number = 0;
    while (*key)
        number = 3 * number + *key++;
    return number;
}

int hash_function(char *key) {
    return transform(key) % TABLE_SIZE;
}



void hash_lp_add(element item, element ht[]) {
    int i, hash_value;
    hash_value = i = hash_function(item.key);
    while (!empty(ht[i])) {
        if (equal(item, ht[i])) {
            fprintf(stderr, "Ž��Ű�� �ߺ��Ǿ����ϴ�.\n");
            exit(1);
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == hash_value) {
            fprintf(stderr, "���̺��� ����á���ϴ�.\n");
            exit(1);
        }
    }
    ht[i] = item;
}

void hash_lp_search(element item, element ht[]) {
    int i, hash_value;
    hash_value = i = hash_function(item.key);
    while (!empty(ht[i])) {
        if (equal(item, ht[i])) {
            fprintf(stderr, "Ž�� %s: ��ġ = %d\n", item.key, i);
            return;
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == hash_value) {
            fprintf(stderr, "ã�� ���� ���̺� ����\n");
            return;
        }
    }
    fprintf(stderr, "ã�� ���� ���̺� ����\n");
}

void hash_lp_print(element ht[]) {
    int i;
    printf("\n====================================\n");
    for (i = 0; i < TABLE_SIZE; i++) {
        printf("[%d] %s\n", i, ht[i].key);
    }
    printf("====================================\n\n");
}

int main(void) {
    char *s[7] = {"do", "for", "if", "case", "else", "return", "function"};
    element e;
    int i;
    init_table(hash_table);
    for (i = 0; i < 7; i++) {
        strcpy(e.key, s[i]);
        hash_lp_add(e, hash_table);
        hash_lp_print(hash_table);
    }
    for (i = 0; i < 7; i++) {
        strcpy(e.key, s[i]);
        hash_lp_search(e, hash_table);
    }
    return 0;
}

