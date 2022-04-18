#include<stdio.h>
int fibonacc(int n);
int main()
{
    int num,ans;
    printf("Enter the length of the series : ");
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        printf(" %d ",fibonacc(i));
    }
    fibonacc(num);
    return 0;
}

int fibonacc(int num)
{
    int i = 0;
    if(num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    
    return fibonacc(num-1)+fibonacc(num-2);
}