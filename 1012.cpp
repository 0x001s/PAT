/*
* @Author: 凛冬
* @Date:   2018-05-30
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
	int i=0;
	int a=0,b=0,e=0;
	int g[6]={0};//计数
	double d=0;
	int len=0;
	int q=1;
	int number[1001];
	cin>>len;
	for(i=0;i<len;i++)
	{
		cin>>number[i];//存入
	}
	for(i=0;i<len;i++)
	{
		int f;//记录余数
		f=number[i]%5;
		switch(f)//分别进行处理
		{
			case 0:
				if(number[i]%10==0)
				{
					a=a+number[i];
					g[f]++;
				}
				break;
			case 1:
				b=b+number[i]*q;
				g[f]++;
				q=-q;
				break;
			case 2:
				g[f]++;
				break;
			case 3:
				d=d+number[i];
				g[f]++;
				break;
			case 4:
				if(g[f]==0)
					e=number[i];
				else if(e<number[i])
					e=number[i];
				g[f]++;
				break;
		}
	}
	if(g[0]==0)
		cout<<"N"<<" ";
	else
		cout<<a<<" ";
	if(g[1]==0)
		cout<<"N"<<" ";
	else
		cout<<b<<" ";
	if(g[2]==0)
		cout<<"N"<<" ";
	else
		cout<<g[2]<<" ";
	if(g[3]==0)
		cout<<"N"<<" ";
	else
		printf("%.1f ",d/g[3]);
	if(g[4]==0)
		cout<<"N"<<endl;
	else
		cout<<e<<endl;
	return 0;
}