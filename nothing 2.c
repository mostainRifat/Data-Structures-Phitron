#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b&&a<c&&b<c)
        printf("%d %d %d\n",a,b,c);
    else if(b<c&&b<a&&a<c)
        printf("%d %d %d\n",b,a,c);
    else if(c<b&&c<a&&b<a)
        printf("%d %d %d\n",c,b,a);
    else if(a<b&&a<c&&c<b)
        printf("%d %d %d\n",a,c,b);
    else if(b<a&&b<c&&c<a)
        printf("%d %d %d\n",b,c,a);
    else if(c<b&&c<a&&a<b)
        printf("%d %d %d\n",c,a,b);
    return 0;
}
