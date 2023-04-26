#include <stdio.h>

int main(){
	char string1[6] = {'H','e','l','l','o',0};
	char string2[6] = "world";
	printf("%s\n",string1);
	printf("%s\n",string2);
	printf("%s %s\n",string1,string2);
	
	return 0;
}
