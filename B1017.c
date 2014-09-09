#include<stdio.h>
int main()
{
	int b;
	char a[1001];
	int i,j;
	int k = 0;
	int r;
	int tmp;
	char q[1001];
	char c;
	c = getchar();
	i=0;
	while (c != ' ') {
		a[i] = c;
		i++;
		c = getchar();
	}
	scanf("%d", &b);

	for (j = 0; j < i; j++) {
		tmp = k * 10 + a[j] - '0';
		q[j] = tmp / b + '0';
		k = tmp % b;
	}
	r = k;
	if (j == 1)
		printf("%c", q[0]);
	else if (q[0] == '0')
		for (j = 1; j < i; j++)
			printf("%c", q[j]);
	else
		for (j = 0; j < i; j++)
			printf("%c", q[j]);
	printf(" ");
	printf("%d",r);
	return 0;
}
