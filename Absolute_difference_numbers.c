#include<stdio.h>
#include<math.h>
int nod(int num)
{
    int c=0;
    while (num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
int main()
{
    long long int a;
    int b;
    scanf("%lld%d",&a,&b);
    int ft,lt,diff;
    int x=pow(10,b);
    ft=a%x;
    while (nod(a)>b)
    {
        a/=10;
    }
    lt=a;
    diff=ft-lt;
    if (diff<0)
    {
        diff*=-1;
    }
    printf("%d",diff);
    return 0;
}