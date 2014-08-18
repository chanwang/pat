#include<stdio.h>
int main()
{
	int i,j,temp=0;
	int n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		while(temp!=1&&temp!=0)
		{
			if(temp%2==0)
				temp=temp/2;
			else
				temp=(3*temp+1)/2;
			for(j=0;j<n;j++)
				if(temp==a[j]&&i!=j)
					a[j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		if(a[i]!=0)
			printf(" %d",a[i]);
	return 0;
}
