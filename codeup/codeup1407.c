#include <stdio.h>
#include <string.h>

int main(void) {
  char a[101];
  gets(a);

  for(int i = 0;i<strlen(a);i++){
    if(a[i]==' ') continue;
    else printf("%c",a[i]);
  }
  return 0;
}

