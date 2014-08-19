#include<stdio.h>
int main()
{
	int i=0,j;
	char a[100];
	gets(a);

	while(a[i]!='\0')
		i++;

	for(;i>=0;i--)
	{
		if(a[i]==' ')
		{
			j=i+1;
			while((a[j]!='\0')&&(a[j]!=' '))
			{	printf("%c",a[j]);
				j++;
			}
			printf(" ");
		}
	}
	j=0;
	while(a[j]!=' '&&a[j]!='\0')
	{
		printf("%c",a[j]);
		j++;
	}
	return 0;
}
