#include <stdio.h>
#include <stdbool.h>

bool f(int y){
	if(y %400 == 0)
		return true;
	else if(y%4==0&&y%4!=100)
		return true;
	else
		return false;
}

main(){
	int y;
	scanf("%d",&y);
	if(f(y))
		printf("À±³â");
	else
		printf("Æò³â");
}
