#include<stdio.h>
main()
{
	float cel;
	float fah;
	
	printf("enter cel value");
	scanf("%f",&cel);
	
	fah=cel*1.8+32;
	printf("fah: %f",fah);
}
