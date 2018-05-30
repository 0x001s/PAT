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
void sort(int *P,int K)              //排序
{
    int i,j,temp;
    for(i=0;i<K;i++)
        for(j=i+1;j<K;j++)
        {

            if(P[i]<P[j])
            {
                temp=P[i];
                P[i]=P[j];
                P[j]=temp;
            }
        }
}

int main()
{
    int *a;
    int n,i,t,j;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));  // 动态申请数组空间
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        if(t==0)
            continue;//碰到数组中有0的项，则跳过
        while(t!=1)
        {
            if(t%2==0)
                t/=2;
            else
                t=(3*t+1)/2;
            for(j=0;j<n;j++)//数组中所有数与运算中出现的数比较
            {
                if(a[j]==t)//如果数组中有和运算过程中相同的数，就把数组中的该数改为0
                {
                    a[j]=0;
                    break;//因为输入的数组是互不相同的数，所以不会存在有多个匹配的情况，找到有一个匹配就可跳出，以节省内存减少运行时间。
                }
            }

        }

    }
    sort(a,n);//排序
    for(i=0;a[i]>0;i++)
    {
    	cout<<a[i]<<(a[i+1]>0?" ":"");
    }
    cout<<endl;
}
