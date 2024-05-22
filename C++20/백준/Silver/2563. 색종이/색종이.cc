#import<iostream>
int x,y,i,j,p[100][100],a;main(){for(std::cin>>x;std::cin>>x>>y;)for(i=x+10;i-->x;)for(j=y+10;j-->y;)if(!p[i][j]++)++a;std::cout<<a;}