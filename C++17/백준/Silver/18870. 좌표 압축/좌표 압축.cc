#include <iostream>
#include <map>
using namespace std;map<int,int>m;int c[1000000],n,i;int main(){scanf("%d",&n);for(i=n;i--;){scanf("%d", &c[i]);m[c[i]];}for(auto&p:m)p.second=++i;while(n--)cout<<m[c[n]]<<' ';}