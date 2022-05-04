#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	float a,b,c,disc,d,root1,root2;
	printf("Enter a,b,c as such the quadratic equation will be : ax^2+bx+c=0 \n");
	scanf("%f %f %f",&a,&b,&c);
	printf("The equation you entered is %.0fx^2+%.0fx+%.0f=0\n",a,b,c);
	disc = b*b-4*a*c;
	d = sqrt(disc);
	root1 = (-b+d)/2*a;
	root2 = (-b-d)/2*a;
	if(disc>0)
	{
		printf("\nroots are real : ");
		printf("\nRoot_1 : %.2f\nRoot_2 : %.2f",root1,root2);
	}
	else if(disc == 0)
	{
		printf("\nroots are equal : ");
		printf("\nRoot_1 : %.2f\nRoot_2 : %.2f",root1,root2);
	}
	else
	{
		printf("\nroots are imaginary : ");
		disc = abs(disc);
		d = sqrt(disc);
		printf("\nRoot_1 : %.2f+%.2fi\nRoot_2 : %.2f-%.2fi",-b/(2*a),d/(2*a),-b/(2*a),d/(2*a));
	}
	return 0;
}
