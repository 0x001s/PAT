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
   int a,b,count=0,num=0;
   while(scanf("%d %d",&a,&b)!=EOF)//接收多组输入
   {
	    if(num==0&&b==0)//仅常数
	    {
	    	printf("0 0");
		}
		else
		{
    		if(b==0)//某项常数
    		{
    			break;
			}
     		if(count==0)//正常情况
    			printf("%d %d",a*b,b-1);
    		else
    			printf(" %d %d",a*b,b-1);
    		count++;
    		num++;
    	}
   }
}