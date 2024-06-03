#import<iostream>
int N,i;main(){for(std::cin>>N;N>0&&N%5;N-=3,++i);std::cout<<(N<0?-1:N/5+i);}