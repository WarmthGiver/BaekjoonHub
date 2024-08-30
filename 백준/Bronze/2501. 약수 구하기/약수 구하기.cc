#import<iostream>
int N,K,d;main(){for(std::cin>>N>>K;d<N&&K;K-=N%++d?0:1);std::cout<<(K?0:d);}