#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){

 char s1[10],s2[10];
 gets(s1,9);
 gets(s2,9);
 int n1=atoi(s1);
 int n2=atoi(s2);
int res=n1+n2;
 printf("%d",res);
    return 0;
}