#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a=");
	scanf("%d",&a);
	int *ans=&a;
	printf("Squre of number %d * %d= %d ",*ans,*ans,*ans * *ans );
}
