#include<iostream>
int t,d[]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};main(){std::string s;std::cin>>s;for(char c:s)t+=d[c-65];std::cout<<t;}