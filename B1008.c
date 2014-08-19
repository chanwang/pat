#include<stdio.h>
int main()
{
	int i,j;
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	{
		if(i+m<n)
			scanf("%d",&a[i+m]);
		else
		{
			j=i+m;
			while(j>=n)
				j=j-n;		
			scanf("%d",&a[j]);
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);
	return 0;
}
