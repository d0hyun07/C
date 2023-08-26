

#include<stdio.h>
 
 
int main(){
    
    char buf[90];
    
    gets(buf); //공백,특수 문자 포함 문자열 입력.
    
    
    //소문자 Ascii a:97 ~ z: 122
    
    for(int i = 97; i <=122; i++){
        int num = 0;
        for (int j = 0; buf[j] != '\0'; j++) {
            if (buf[j] == i){
                num++;
            }
        }
        printf("%c:%d\n",i,num);
        
    }
    
 
    
 
    return 0;
    
 
}

