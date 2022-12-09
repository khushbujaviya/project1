#include<stdio.h>
main()
{
	float sal;
	float HRA;
	float DA;
	float TA;
	float Ans;
	
	printf("enter base salary:");
	scanf("%f",&sal);
	
	HRA=sal*10/100;
	DA=sal*5/100;
	TA=sal*8/100;
	
	Ans=sal+HRA+DA+TA;
	
	printf("Ans:%f",Ans);
}
