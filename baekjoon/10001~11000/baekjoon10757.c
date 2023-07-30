#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{	
	char a[10001],b[10001],c[2][10001];
	int d[10002];

	scanf("%s %s",a,b);

	int lena=strlen(a);

	int lenb=strlen(b);

	for (int j=0; j<lena; j++){
		c[0][j]=a[lena-j-1];
	}
			for (int j=0; j<lenb; j++)
			{
				c[1][j]=b[lenb-j-1];
			}
			int len = lena > lenb ? lena : lenb;
			for(int i=0; i<len; i++)
			{
				d[i]=c[0][i]-'0'+c[1][i]-'0';

				if(d[i]<0) d[i]+=48;

				if(d[i-1]>9)
				{
					d[i-1]-=10;
					d[i]+=1;
				}
			}
			for(int i=len-1; i>=0;i--)
			{
				printf("%d",d[i]);
			}
	return 0;
}
