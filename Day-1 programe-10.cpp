#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the a value: ");
	scanf("%d",&a);
	printf("Enter the b value: ");
	scanf("%d",&b);
	printf("Before swapping, a=%d and b=%d\n",a,b);
	temp=a;
	b=a;
	temp=b;
	printf("After swapping, a=%d and b=%d\n",a,b);
	return 0;
}
	