#include<stdio.h>
typedef struct var1 
{
	int l;
	char c;
	long double d;
	float b;
} structure_var;
int main()
{
	structure_var a;
	printf("%d",sizeof(a));
	return 0;
}
