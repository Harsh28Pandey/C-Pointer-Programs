#include<stdio.h>


int func(int array[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("The value at a[%d] is %d\n",i,array[i]);
	}
//	array[0]=384;//very important point that if you change any value here, it gets
//  reflected in main()
	return 0;
}


int func1(int *ptr)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("The value at a[%d] is %d\n",i,ptr[i]);
	}
	*(ptr + 2 )= 6534;
	return 0;
}


int func2(int arr[2][2])//multi-dimensional array
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("The value at %d,%d is %d\n",i,j,arr[i][j]);
		}
	}
}


int main()
{
	int arr[2][2] = {{43,6},{67,54}};
//	printf("The value at index 0 is %d\n",arr[0]);
//	func(arr);
//	printf("The value at index 0 is %d\n",arr[0]);
//	func1(arr);
//	func1(arr);
	func2(arr);
	return 0;
}
