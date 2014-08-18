#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int k=1;
	int flag;
	int d,count=0;
	int n;
	scanf("%d",&n);
	int a[50001]={0};
	a[0]=2;
	for(i=3;i<=n;i++)
	{
		flag=0;
		for(j=2;j<(sqrt(i)+1);j++)
		{	if(i%j==0)
			{	flag=1;
				break;
			}
		}
		if(flag==0)
		{	a[k]=i;
			k++;
		}
	}
	for(i=1;i<n/2+1;i++)
	{
		d=a[i]-a[i-1];
		if(d==2)
			count++;
	}
	printf("%d",count);
	return 0;
}
