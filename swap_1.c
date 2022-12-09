#include<stdio.h>
main()
{
	int a;
	int b;
	 
	 printf("enter value a:");
	 scanf("%d",&a);
	
	 printf("enter value b:");
	 scanf("%d",&b);
	 
	 a=a-b;
	 b=a+b;
	 a=b-a;
	  
	  printf("a:%d\n",a);
	  printf("b:%d\n",b);
}
