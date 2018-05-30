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
	string name[101];//存放学生姓名
	string stunum[101];//存放学生学号
	int score[101];//存放学生成绩
	int num;//输入组数
	int max=0,min=0;//记录最大最小值
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>name[i];
		cin>>stunum[i];
		cin>>score[i];
		if(score[i]>score[max])//如果输入比最大分高
		{
			max=i;//记录位置
		}
		if(score[i]<score[min])//如果比最小分小
		{
			min=i;//记录位置
		}
	}
	cout<<name[max]<<" "<<stunum[max]<<endl;//输出最大的信息
	cout<<name[min]<<" "<<stunum[min]<<endl;//输出最小的信息
	return 0;
}