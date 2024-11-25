#include<stdio.h>
#include<conio.h>
char* display()
{
	return "anystring"; // when i reurn the string from function, why it does not get stored in stack memory location?
}
int main()
{
	char *str;
	str=display();
	printf("%s",str);
}

