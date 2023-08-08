#include <stdio.h>
 
int main(){
    char privateNumber[15]; 
    int birth[4]; 
    char gender; 
    
    scanf("%s", privateNumber);
    birth[3] = privateNumber[7]-48;
    
	int i; 
    for(i=0; i<3; i++){
        birth[i] = ((privateNumber[i*2]-48) * 10) + (privateNumber[i*2+1] - 48);
    }
    
    /*if(birth[3] == 1 || birth[3] == 3){ 
        gender = 'M';
    }else{ 
        gender = 'F';
    }*/
    
    
    printf("19%02d/%02d/%02d %c\n", birth[0], birth[1], birth[2], birth[3] == 1 || birth[3] == 3 ? 'M':'F');
    
    return 0;
}
