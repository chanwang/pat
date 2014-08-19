#include<stdio.h>
int main()
{
	int i,j,n,x,max;
	int a[1001]={0},b[1001]={0};
	scanf("%d%d",&x,&n);
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
	}
	return 0;
}
