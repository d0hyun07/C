#include <stdio.h>

int main(){
	int A[4][2],s,i,j;
	for(i=0;i<4;i++){
		printf("%d�� �л��� ����,���α׷��� ������ �Է��Ͻÿ�. : ",i+1);
		for(j=0; j<2;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<4;i++){
		s=0;
		printf("%d�� �л� ���� : ",i+1);
		for(j=0;j<2;j++){
			s+= A[i][j];
		}
		printf("%d\n",s);
	}
	
	return 0;
}
