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
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){  
    char str1[61];  
    char str2[61];  
    cin.getline(str1,61);  
    cin.getline(str2,61);  
    char str3[61];  
    char str4[61];  
    cin.getline(str3,61);  
    cin.getline(str4,61);  
    int a;  
    int count=0;  
    for(a=0;a<60;a++){  
        if(str1[a]>='A'&&str1[a]<='G'&&count==0)
        {
            if(str1[a]==str2[a])
            {
                switch(str1[a])
                {
                case 'A':cout<<"MON ";
                    break;
                case 'B':cout<<"TUE ";
                    break;
                case 'C':cout<<"WED ";
                    break;
                case 'D':cout<<"THU ";
                    break;
                case 'E':cout<<"FRI ";
                    break;
                case 'F':cout<<"SAT ";
                    break;
                case 'G':cout<<"SUN ";
                    break;
                }
                count++;
                a++;
            }
        }
        if((str1[a]>='A'&&str1[a]<='N'&&count==1)||(str1[a]>='0'&&str1[a]<='9'&&count==1))
        {
            if(str1[a]==str2[a])
            {
                switch(str1[a])
                {
                case '0':cout<<"00:";
                    break;
                case '1':cout<<"01:";
                    break;
                case '2':cout<<"02:";
                    break;
                case '3':cout<<"03:";
                    break;
                case '4':cout<<"04:";
                    break;
                case '5':cout<<"05:";
                    break;
                case '6':cout<<"06:";
                    break;
                case '7':cout<<"07:";
                    break;
                case '8':cout<<"08:";
                    break;
                case '9':cout<<"09:";
                    break;
                case 'A':cout<<"10:";
                    break;
                case 'B':cout<<"11:";
                    break;
                case 'C':cout<<"12:";
                    break;
                case 'D':cout<<"13:";
                    break;
                case 'E':cout<<"14:";
                    break;
                case 'F':cout<<"15:";
                    break;
                case 'G':cout<<"16:";
                    break;
                case 'H':cout<<"17:";
                    break;
                case 'I':cout<<"18:";
                    break;
                case 'J':cout<<"19:";
                    break;
                case 'K':cout<<"20:";
                    break;
                case 'L':cout<<"21:";
                    break;
                case 'M':cout<<"22:";
                    break;
                case 'N':cout<<"23:";
                    break;
                }
                count++;
                a++;
            }
        }
        if(count==2)
        {
            break;
        }
    }
    for(a=0;a<=59;a++){
        if((str3[a]>='a'&&str3[a]<='z')||(str3[a]>='A'&&str3[a]<='Z'))
        {
            if(str3[a]==str4[a])
            {
                if(a<10){
                    cout<<"0";
                    cout<<a;
                    return 0;
                }
                else
                {
                    cout<<a;
                    return 0;
                }
            }
        }
    }

    return 0;
}