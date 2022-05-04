#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num,sum=0;
	char conf = 'Y';
	
	while(conf == 'Y')
	{
		printf("%d",sum);
		printf("\nEnter to Add : ");
		scanf("%d",&num);
		
		sum+=num;
		
		printf("Continue ? : (Y/N)\t\n");
		scanf("%c",&conf);
		conf = toupper(conf);
		
		system("cls");
		
		
		if(conf!='N' && conf!='Y')
		{
			printf("Wrong Input");
			continue;
		}
	}
}
