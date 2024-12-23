#include <stdio.h>
#include "mathhead.h"

// warrning!! nothing this time!
int main()
{
#ifdef DEBUG
	printf("this is a DEBUG mode the DEBUG macro is:%d\n",DEBUG);
#endif
	int x,y;
	x=10;
	y=5;
	int a=add(x,y);
	int s=sub(x,y);
	int m=mul(x,y);
	int am=div(x,y);
	printf("hello the resault of matc x add y is :%d\n",a);
	printf("hello the resault of matc x sub y is :%d\n",s);
	printf("hello the resault of matc x mul y is :%d\n",m);
	printf("hello the resault of matc x div y is :%d\n",am);
	return (0);
}
