/*
* @Author: 凛冬
* @Date:   2018-05-27
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-27
*
* 题目好像有点抽风
* 让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。
* 显然有 d1=1且对于n>1有 dn 是偶数。
* “素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
* 现给定任意正整数N (< 105)
* 请计算不超过N的满足猜想的素数对的个数。
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int prime(int n)//找素数
{
	int i;
	if(n<=1)//1或0无视
		return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)//如果有因子
			return 0;
	}
		return 1;//如果是质数
}
int main()
{
	int n,sum=0;
	cin>>n;
	for(int k=2;k<=n-2;k++)
	{
		if(prime(k)&&prime(k+2))//如果都是质数
			sum++;
	}
	cout<<sum;
	return 0;
}