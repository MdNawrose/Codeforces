#include<stdio.h>
#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    long long int j,i,n,x=0;

    scanf("%s",&a);
    if(a[0]>=97&&a[0]<=122)
    {
        a[0]-=32;
    }
    printf("%s\n",a);
    return 0;
}
