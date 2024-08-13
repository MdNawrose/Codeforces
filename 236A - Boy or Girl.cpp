#include<stdio.h>
#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[200];
    long long int i,j,x[200],cnt=0;
    scanf("%s",&a);
    for(i=97; i<=122; i++)
    {
        x[i]=0;
    }
    for(i=0; i<strlen(a); i++)
    {
        x[a[i]]++;
    }
    for(i=97; i<=122; i++)
    {
        if(x[i]>=1)
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
