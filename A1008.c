/*************************************************************************
 *	> File Name: A1008.c
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月05日 星期五 14时36分21秒
 ************************************************************************/

#include<stdio.h>
int main()
{
        int n;
        int a[100];
        int i, sum = 0;
        a[0] = 0;
        scanf("%d",&n);
        for (i = 1; i <= n; i++) {
                scanf("%d",&a[i]);
                if (a[i] - a[i-1] > 0)
                        sum = sum + 6 * (a[i] - a[i-1]);
                else 
                        sum = sum + 4 * (a[i-1] -a[i]);
        }
        sum = sum + 5 * n;
        printf("%d",sum);
        return 0;
}
