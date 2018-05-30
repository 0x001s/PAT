/*
* @Author: 凛冬
* @Date:   2018-05-25
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-27
*
* 根据条件2
那么正确的有这些：
PAT
APATA
AAPATAA
AAAPATAAA
…，就是中间一个A左右加上等量的A（不加也行）都是正确的。
根据条件3
拿上面的那几个正确的举例子，那么正确的有这些：
PAT —— 对于 aPbTc 来说ac是空，b是A。所以对于aPbATca来说PAAT 是正确的。
APATA —— 对于aPbTc来说，abc都是A。所以对于aPbATca来说 APAATAA 是正确的。
AAPATAA —— 对于aPbTc来说，a和c是AA，b是A。所以对于aPbATca来说AAPAATAAAA是正确的，
AAAPATAAA —— 对于aPbTc来说，a和c是AAA，b是A。所以对于aPbATca来说AAAPAATAAAAAA是正确的，
再类推一下，AAAAPAATAAAAAAAA 是正确的。。。(其实b只能等于A或者空字符串)
总结一下，只能有一个P一个T，中间必须有A，中间末尾和开头可以插入A。但是必须满足开头的A的个数 * 中间的A的个数 = 结尾的A的个数
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool help(string s)
{
    int p=0,t=0;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i]!='P' && s[i]!='A' && s[i]!='T')
            return false;
        if(s[i] == 'P')
            p++;
        if(s[i] == 'T')
            t++;
    }
    if(p!=1 || t!=1)
        return false;
    int k,m;//记录P T位置
    for(int i=0; i<len; i++)
    {
        if(s[i]=='P')   k = i;
        if(s[i]=='T')   m = i;
    }
    if(k == m-1)//P T中间没有A
        return false;
    if((k*(m-k-1)) != (len-1-m))//P前'A'的数量 * P和T之间'A'的数量 应该等于 T后'A'的数量
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        if( help(s[i]) )
            s[i] = "YES";
        else
            s[i] = "NO";
    }
    for(int i=0; i<n; i++)
        cout << s[i] << endl;
    return 0;
}