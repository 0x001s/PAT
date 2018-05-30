/*
* @Author: 凛冬
* @Date: 2018-05-30
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-30
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cmath>

using namespace std;

bool prime(int a)//判断是否为素数
{
	if(a==1 || a==0)//1和0不是
		return false;
	if(a==2)//2是
		return true;
	if(a%2 == 0)//偶数不是
		return false;
	int temp = (int)sqrt((double)a);
	for(int i = 3;i<=temp;i++)//判断其他
		if(a%i==0)
			return false;
	return true;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int i=1;
	int count=0;//计数素数
	while(1)
	{
		i++;
		if(prime(i))
			count++;
		if(count==m)
			break;
	}
	while(count<n)//每十个一行
	{
		cout<<i;
		if((count-m)%10!=9)
			cout<<" ";
		i++;
		while(!prime(i))
			i++;
		count++;
		if((count-m)%10==0)
			cout<<endl;
	}
	cout<<i;
	return 0;
}