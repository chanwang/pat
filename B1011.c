#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	long long a[10][3]={0};
	long long c[10]={0};
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<t;i++)
	{
		c[i]=a[i][0]+a[i][1];
		if(c[i]>a[i][2])
			printf("Case #%d: true\n",i+1);
		else
			printf("Case #%d: false\n",i+1);
	}
	return 0;
}
