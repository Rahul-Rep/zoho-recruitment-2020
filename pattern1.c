#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	int i,j,k,l;
	l=strlen(str)/2;
	for(i=0;i<strlen(str);i++)
	{
		for(j=strlen(str)-1;j>=i+1;j--)
		  printf(" ");
		  l=strlen(str)/2;
		for(k=0;k<=i;k++)
		{
			printf("%c",str[l%strlen(str)]);
			l++;
		}
		  
		  
		printf("\n");
		
	}
	
}
