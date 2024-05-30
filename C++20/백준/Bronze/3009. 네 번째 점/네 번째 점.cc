#import<iostream>
int c[6],i;main(){while(i<6)std::cin >> c[i++];std::cout<<(c[0]^c[2]^c[4])<<' '<<(c[1]^c[3]^c[5]);}