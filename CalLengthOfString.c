//Calculate the length of string using %n format specifier
#include<stdio.h>
int main()
{
	int c;
	printf("Vishnu%n\n",&c);//Output is Vishnu
	printf("%d",c);//Output is 6(Length of my name)
	return 0;
}
