#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float divsion=a*1.0/b;
    printf("%d %d %d %0.2f",sum,sub,mul,divsion);
    return 0;
}