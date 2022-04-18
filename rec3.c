#include<stdio.h>
#include<math.h>
int reverse(int n);
int main()
{
    int num;
    scanf("%d",&num);
    int rev = reverse(num);
    printf("%d",rev);
    return 0;
}

int reverse(int n)
{
    if(n == 0)
    {
        return 0;
    }

    int  temp = n,i=-1;
    while(temp>0)
    {
        temp = temp/10;
        i++;
    }
    int rem = n%10;
    n= n/10;
    int res = (rem*pow(10,i))+reverse(n);
    return res;
}