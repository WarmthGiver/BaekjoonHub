#import<bits/stdc++.h>
using namespace std;int N,M,i;main(){cin>>N>>M;string s;map<string,int>S;for(N+=M;N--&&cin>>s;N<M?i+=S[s]:S[s]=1);cout<<i;}