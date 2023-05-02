#include <stdio.h>
int myfun(char *ch){
    ch[0]="i";
}
int main()
{
    char ch[]="hello";
    myfun(ch);
    printf("%s",ch);
    return 0;
}
