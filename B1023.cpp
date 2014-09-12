/*************************************************************************
 *	> File Name: B1023.cpp
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月12日 星期五 11时22分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
        int a[10];
        int j;
        for (int i = 0; i < 10; ++i)
                cin >> a[i];
        //for (int i = 1; i < 10; ++i)
        j = 1;
        while (!a[j]) {
                ++j;
        }
        cout << j;
        --a[j];
        for (int i = 0; i < 10; ++i) {
                while (a[i]) {
                        cout << i;
                        --a[i];
                }
        }
        return 0;
}
