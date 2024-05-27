#import<iostream>
int X,i;main(){std::cin>>X;while(++i<X)X-=i;if(i&1)std::cout<<1+i-X<<'/'<<X;else std::cout<<X<<'/'<<1+i-X;}