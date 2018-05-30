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
	long long int a;
	long long int b;
	long long int c;
	int i;
	int num;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>a>>b>>c;
		if(a+b>c)
		{
			cout<<"Case #"<<i+1<<": true"<<endl;
		}
		else
		{
			cout<<"Case #"<<i+1<<": false"<<endl;
		}
	}
	return 0;
}