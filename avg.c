#include<stdio.h>
void main()
{
	int n,i,avg=0,r=0,min=9,f=1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		avg+=a[i];
	}
	avg=avg/n;
	for(i=0;i<n;i++)
	{
		if(min>=abs(a[i]-avg))
		{
		  min=abs(a[i]-avg);
	    }
	}
	for(i=0;i<n;i++)
	{
		if(min==abs(a[i]-avg )&& r!=a[i])
		{
		  r=a[i];
		  f=0;
		  printf("%d ",r);
	    }
	}
	if(f)
	printf("%d",0);
}
