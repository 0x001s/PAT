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

int main()
{
	int number=0;//接受传入数值
	int step=0;//步数
	cin>>number;
	while(1)
	{
		if(number==1)
		{
			break;
		}
		else if(number%2==0)
		{
			number=number/2;
			step++;
		}
		else
		{
			number=(number*3+1)/2;
			step++;
		}
	}
	cout<<step<<endl;
	return 0;
}