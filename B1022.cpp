/*************************************************************************
 *	> File Name: B1022.cpp
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月11日 星期四 14时45分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
        unsigned int a, b, c, d;
        unsigned int e[1000];
        int i = 0;
        cin >> a >> b >> d;
        c = a + b;
        do {
                e[i] = c % d;
                c = c/d;
                i++;
        } while (c);
        for (int j = i - 1; j >= 0; --j)
                cout << e[j];
        return 0;
}
