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
	int n;//记录数字个数
	int m;//记录移动位置
	cin>>n;
	cin>>m;
	int number[101];//记录数字
	int i;
	m=m%n;
	for(i=m;i<n;i++)
		cin>>number[i];
	for(i=0;i<m;i++)
		cin>>number[i];
	for(i=0;i<n-1;i++)
		cout<<number[i]<<" ";
	cout<<number[i]<<endl;
	return 0;
}