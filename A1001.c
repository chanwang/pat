#include<stdio.h>
int main()
{
	int a,b,c;
	int i=0,j=0,flag;
	char d[10];
	scanf("%d%d",&a,&b);
	c=a+b;
	if(c>0)
		flag=1;
	else if(c==0)
		printf("%d",0);
	else
	{	flag=-1;
		c=-c;
	}
	while(c!=0)
	{	
		d[i]=c%10+'0';
		c=c/10;
		i++;
		if(c!=0)
			if(i==3||i==7)
				d[i++]=',';	
	}
	if(flag>0)
	{	for(j=(i-1);j>=0;j--)
			printf("%c",d[j]);
	}
	else
	{	d[i]='-';
		for(j=i;j>=0;j--)
			printf("%c",d[j]);
	}	
	return 0;
}
