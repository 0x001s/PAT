/*
* @Author: 凛冬
* @Date:   2018-05-27
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-27
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int num;//接受输入的数字
	int b,s,n;//分别表示个位，十位，百位
	cin>>num;
	n=num%10;//保存个位数字
	s=num/10%10;//保存十位数字
	b=num/100%10;//保存百位数字
	for(int i=0;i<b;i++)
	{
		cout<<"B";
	}
	for(int i=0;i<s;i++)
	{
		cout<<"S";
	}
	for(int i=0;i<n;i++)
	{
		cout<<i+1;
	}
	cout<<endl;
	return 0;
}