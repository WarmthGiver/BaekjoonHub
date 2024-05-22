#import<iostream>
int x,y,i,j,p[100][100],a;main(){for(std::cin>>x;std::cin>>x>>y;)for(i=10;i--;)for(j=10;j--;)if(!p[x+i][y+j]++)++a;std::cout<<a;}