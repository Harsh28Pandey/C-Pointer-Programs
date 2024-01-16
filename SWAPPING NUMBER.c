//using call by reference to find swap , add and subtract program
#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
int add(int *a,int *b)
{
	int sum;
	sum = *a + *b;
	return sum;
}
int subtract(int *a,int *b)
{
	int sub;
	sub = *b - *a;
	return sub;
}
int main()
{
	int a,b;
	printf("Enter the first number a:");
	scanf("%d",&a);
	printf("Enter the second number b:");
	scanf("%d",&b);
	printf("a = %d and b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d and b = %d\n",a,b);
//	x=add(&a,&b);
	printf("Addition is %d\n",add(&a,&b));
//	y=subtract(&a,&b);
	printf("Subtraction is %d\n",subtract(&a,&b));
	return 0;
}
