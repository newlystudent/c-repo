#include<stdio.h>
int sumres(int x);
int main()
{
    int n;
    scanf("%d",&n);
    int ans = sumres(n);
    printf("%d",ans);
    return 0;
}

int sumres(int n)
{
    int sum=0;
    if(n==1)
    {
        return 1;
    }
    else
    {
        sum = n + sumres(n-1);
    }
    return sum;
}