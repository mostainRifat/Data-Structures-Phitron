#include<stdio.h>
int main()
{
    int x,y,z,m;
    scanf("%d %d %d %d",&x,&y,&z,&m);
    int a,b,c;
    c=m-x;
    a=y-c;
    b=x-a;
    printf("%d %d %d\n",a,b,c);

    return 0;
}
