#include<string.h>
char i=96,S[];main(){scanf("%s",S);while (i++<122){char*c=strchr(S,i);printf("%d ",c?c-S:-1);}}