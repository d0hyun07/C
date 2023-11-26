#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 20

typedef char element;
//���� ����ü �ۼ�
typedef struct{
	element data[STACK_SIZE];
	int top;
}Stack;

void initStack( Stack *s );
int isFull( Stack *s );
int isEmpty( Stack *s );
void push( Stack *s, element data );
element pop( Stack *s );

int main(){
	int i;
 	Stack s;
	element data;
	char str[20];
	initStack(&s);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	//���ڿ��� �Է¹޾� �Ųٷ� ���
	for(i=0;i<strlen(str);i++){
		push(&s,str[i]);
	}
	for(i=0;i<strlen(str);i++){
		pop(&s);
	}
	return 0;
}

void initStack( Stack *s ){
	 s->top = -1;
}
int isFull( Stack *s ){
	 if(s->top == STACK_SIZE-1)
		return 1;
	return 0;
}
int isEmpty( Stack *s ){
 if(s->top == -1)
		return 1;
	return 0;
}
void push( Stack *s, element c ){
	 if(isFull(s)){
		printf("������ �� ���ֽ��ϴ�.\n");
		return;
	}
	s->data[++s->top] = data;
}
element pop( Stack *s ){
	 if(isEmpty(s)){
		printf("������ ����ֽ��ϴ�.\n");
		return 0;
	}
	return s->data[s->top--];
	
}
