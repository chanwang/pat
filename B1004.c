#include<stdio.h>
struct student{
	char name[20];
	char num[20];
	int score;
};
int main()
{
	int i,j=0;
	int n;
	int max_s=-1,min_s=101;
	int max,min=0;
	scanf("%d",&n);
	struct student stu[n];
	for(i=0;i<n;i++)
		scanf("%s%s%d",stu[i].name,stu[i].num,&stu[i].score);
	for(j=0;j<n;j++)
	{
		if(stu[j].score>max_s)
		{	max_s=stu[j].score;
			max=j;
		}
		if(stu[j].score<min_s)
		{	min_s=stu[j].score;
			min=j;
		}
	}
	printf("%s %s\n%s %s",stu[max].name,stu[max].num,stu[min].name,stu[min].num);
	return 0;
}
