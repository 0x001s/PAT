/*
* @Author: 凛冬
* @Date:   2018-05-25
* @Last Modified by:   凛冬
* @Last Modified time: 2018-05-25
*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pinyin(int sum)
{
	switch(sum)
	{
		case 1 : cout<<"yi";break;
		case 2 : cout<<"er";break;
		case 3 : cout<<"san";break;
		case 4 : cout<<"si";break;
		case 5 : cout<<"wu";break;
		case 6 : cout<<"liu";break;
		case 7 : cout<<"qi";break;
		case 8 : cout<<"ba";break;
		case 9 : cout<<"jiu";break;
		case 0 : cout<<"ling";break;
	}
}

int main()
{
	char number[101];//读入数据
	cin>>number;
	int sum=0;
	int i=0;//记录位置
	while(1)
	{
		if(number[i]=='\0')
		{
			break;
		}
		i++;
	}
	i--;
	while(1)
	{
		if(i==0)
		{
			sum=sum+(int)(number[i]-48);
			break;
		}
		else
		{
			sum=sum+(int)(number[i]-48);
			i--;
		}
	}
	//cout<<sum<<endl;
	int output[101];//存储输出
	while(1)
	{
		if(sum<10)
		{
			output[i]=sum%10;
			break;
		}
		else
		{
			output[i]=sum%10;
			i++;
			sum=sum/10;
		}
	}
	//cout<<i<<endl;
	for(;i>0;i--)
	{
		pinyin(output[i]);
		cout<<" ";
	}
	pinyin(output[0]);
	cout<<endl;
	return 0;
}