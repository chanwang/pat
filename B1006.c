#include<stdio.h>
int main()
{
	int i=0;
	int j;
	int n;
	int a[3]={0,0,0};
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}

	for(j=0;j<a[2];j++)
		printf("B");
	for(j=0;j<a[1];j++)
		printf("S");
	for(j=0;j<a[0];j++)
		printf("%d",j+1);

	return 0;
}
