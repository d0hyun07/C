#include <stdio.h>

int main(){
	int m_s,l_s,s_s;
	double m_s_b,l_s_b,s_s_b;
	
	printf("*** ���� ���� ��� ���α׷� ***\n");
	printf("�߰���� �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf("%lf %d",&m_s_b,&m_s); 
	printf("�⸻��� �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf("%lf %d",&l_s_b,&l_s); 
	printf("������ �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf("%lf %d",&s_s_b,&s_s);
	
	float result;
	result = m_s_b * m_s + l_s_b * l_s + s_s_b * s_s;
	printf("������ %.1f�Դϴ�.",result);
	
}
