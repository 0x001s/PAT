/*
* @Author: 凛冬
* @Date:   2018-05-27
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-30
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char str[41][81];//保存字符串
    int i=0;
    while(1)//正序输入
    {
        cin>>str[i++];
        if (getchar()=='\n')//输入结束
             break;
    }
    i--;
    while(i>0)//倒序输出
    {
        cout<<str[i]<<" ";
        i--;
    }
    cout<<str[i]<<endl;
    return 0;
}
