#include<stdio.h>
int main()
{
	int i,j,k,max;
	int a[1001]={0},b[1001]={0};
	int n[1001],x[1001];
	char c[4001];
	gets(c);
	i=0;j=0;k=0;
	max=c[2]-'0';
	puts(c);
	printf("%d",max);
/*	while(c[i]!='\0')
	{
		if(i%4==0)
		{	x[j]=c[i]-'0';
			j++;
			i++;}
		else if(i%4!=0&&i%2==0)
		{	n[k]=c[i]-'0';
			k++;
			i++;}
		
	}
	for(i=0;i<=max;i++)
	{
		b[n[i]-1]=x[i]*n[i];	
	}
	for(j=max-1;j>=0;j--)
		if(b[j]!=0)
			printf("%d %d ",b[j],j);
*/
/*	scanf("%d%d",&x,&n);
	a[n]=x;
	max=n;
	while(n!='\n'&&x!='\n')
	{
		scanf("%d%d",&x,&n);
		a[n]=x;
	}
	for(i=max;i>=0;i--)
	{
		if(a[i]!=0)
		printf("%d %d ",a[i],i);
	}*/
	return 0;
}
