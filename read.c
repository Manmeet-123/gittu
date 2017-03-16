#include<stdio.h>
int main(void)
{
	int a=23;
	int b=12;

	printf("%d",&a);
	printf("%d",&b);

	//swapping..
        int temp=a;
        a=b;
        b=temp;


	return 0;
}
