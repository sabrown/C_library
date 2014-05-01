#include<stdio.h>

int main()
{
	int x,y,iterate;
	int *ptr_p;
	
	x=5;
	ptr_p=&x;
	scanf("%d", &iterate);
	do
	{
	*ptr_p=1+x;
	printf("%d\n", x);
	if (x==2014)
	break;
	}
	while (x<iterate);
	printf("\n");
	return 0;
}
