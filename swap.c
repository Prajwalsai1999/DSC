# include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	printf("The values of a and b before swaping %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The values of a and b after swapping is %d %d\n",a,b);
}