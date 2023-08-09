#include <stdio.h>

int main(){
	int hour,minute,time;
	int cookMin;
	scanf("%d %d",&hour,&minute);
	scanf("%d",&time);
	minute = minute + time;
	if(minute>59){
		cookMin = minute / 60;
		minute = minute % 60;
		hour += cookMin;
		
		if(hour>23){
		hour = hour % 24;
		}
	}
	printf("%d %d",hour,minute);
	
}
