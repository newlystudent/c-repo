#include<stdio.h>

int main()
{
	int num, *add;
	num = 10, add =  &num;
	printf("Val  = %u Add = %u val_at_add = %u",num,add,*add);
	int x[4][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}, {10, 11, 12}};
	printf("\n%d, %d, %d", x+3, **(x+3), **(x+2)+3);
	return 0;
}
