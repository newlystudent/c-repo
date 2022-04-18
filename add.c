#include<stdio.h>
#include<conio.h>
void int_add(int x , int y)
{
	int ans;
	ans = x+y;
	printf("The answer is %d",ans);
}
void float_add(float x , float y)
{
	float ans;
	ans = x+y;
    printf("The answer is %f",ans);
}
int main()
{
    int a,b,ch1,ch2;
    float c,d;
    printf("Enter Your Choice : \n\t 5 for addition panel and 8 to exit : ");
    scanf("%d",&ch1);
    switch(ch1)
    {
    	case 5 :
	    		printf("TO Add Integer Numbers Enter 1 : \n");
			    printf("TO Add Floating point Numbers Enter 2 : \n\t ");
			    scanf("%d",&ch2);
			    switch (ch2)
			    {
			        case 1 : printf("Enter int numbers : \n");
			        		scanf("%d",&a);
			        		scanf("%d",&b);
			                int_add(a,b);  
			        		break;
			        case 2 : printf("Enter float numbers : \n");
			        		scanf("%f",&c);
			        		scanf("%f",&d);
			                float_add(a,b); 
			            	break;
			    	default:
			            printf("Invalid Choice!!\n\t");
			            main();
			        	break;
			    }
			    break;
		case 8: return 0;
		default: main();
	}
    
    return 0;
}
