#include <stdio.h>

int main(){
	int m_s,l_s,s_s;
	double m_s_b,l_s_b,s_s_b;
	
	printf("*** 과목별 점수 계산 프로그램 ***\n");
	printf("중간고사 반영 비율/받은 점수를 입력하세요:");
	scanf("%lf %d",&m_s_b,&m_s); 
	printf("기말고사 반영 비율/받은 점수를 입력하세요:");
	scanf("%lf %d",&l_s_b,&l_s); 
	printf("수행평가 반영 비율/받은 점수를 입력하세요:");
	scanf("%lf %d",&s_s_b,&s_s);
	
	float result;
	result = m_s_b * m_s + l_s_b * l_s + s_s_b * s_s;
	printf("점수는 %.1f입니다.",result);
	
}
