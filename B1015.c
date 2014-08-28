#include<stdio.h>
int main()
{
	int i,j=0,k=0,h=0,p=0,q=0;
	int count=0;
	int count1=0,count2=0,count3=0,count4=0;
	int n,l,h;
	scanf("%d%d%d",&n, &l, &h);
	int a[n][4];
	int b[n][6];
	for (i=0; i<n; i++) {
		scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
		a[i][3]=0;
		if (a[i][1] >= l && a[i][2] >= l) {
			count++;
			if (a[i][1] >= h && a[i][2] >= h) {
				a[i][3]=1;
				count1++;
			}
			else if (a[i][1] >= h && a[i][2] < h) {
				a[i][3]=2;
				count2++;
			}
			else if (a[i][1] < h && a[i][2] < h && a[i][1] >= a[i][2]) {
				a[i][3]=3;
				count3++;
			}
			else {
				a[i][3]=4;
				count4++;
			}
		}
	}
	printf("%d\n", count);
	for (i=0;i<i;i++) {
		switch (a[i][3]) {
		case 1: 
			b[j] = a[i];
			b[j][5] = a[i][1] + a[i][2];
			j++;
			break;
/*		case 2:
			c[k] = a[i];
			c[k][5] = a[i][1] + a[i][2];
			k++;
			break;
		case 3:
			d[h] = a[i];
			d[h][5] = a[i][1] + a[i][2];
			h++;
			break;
		case 4:
			e[p] = a[i];
			e[p][5] = a[i][1] + a[i][2];
			p++;
			break;*/
		default:
			break;
		}
	}
	for (j=0;j<count1;j++) {
		for (q = 0; q < j; q++) {
			if (b[j][5] > b[q][5] || (b[j][5] == b[q][5] && b[j][1] > b[q][1]) || (b[j][5] == b[q][5] && b[j][1] == b[q][1] && b[j][0] < b[q][0])) {
				tmp = b[j];
				b[j] = b[q];
				b[q] = tmp;
			}		
	}
	for (j=0; j < count1; j++)
		printf("%d %d %d\n", b[j][0], b[j][1], b[j][2]);
	//printf();
	return 0;
}
