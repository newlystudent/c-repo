#include<stdio.h>
void string_rev(char a[],char b[],int len,int ind);
int main()
{
    int len;
    printf("Enter Length of the String : ");
    scanf("%d",&len);
    char str[len],rev[len];
    int i;
    for(i=0;i<len-1;i++)
    {
        scanf("%c",&str[i]);
    }
    string_rev(str,rev,len,len-1);
    for(i=0;i<len-1;i++)
    {
        printf("%c",rev[i]);
    }
    return 0;
}

void string_rev(char a[], char b[],int len, int ind)
{
    if (ind < 0)
    {
        return;
    }

    string_rev(a, b,len, ind-1);
    
    int ind1 =  len-(ind+1);

    b[ind1] = a[ind];
} 
