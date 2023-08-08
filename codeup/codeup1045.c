#include <stdio.h>

main(){
	long long int a,b;
	scanf("%lld %lld",&a, &b);
	printf("%lld\n",a+b);
	printf("%d\n",(int)a-b);
	printf("%lld\n",a*b);
	printf("%d\n",(int)a/b);
	printf("%d\n",(int)a%b);
	printf("%.2f",(float)a/b);
	
	return 0;
}
