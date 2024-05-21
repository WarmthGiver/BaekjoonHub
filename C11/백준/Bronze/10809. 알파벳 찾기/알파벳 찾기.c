#include <string.h>
char i=96,S[],*c;main(){scanf("%s",S);while(i++<122){c=strchr(S,i);printf("%d ",c?c-S:-1);}}