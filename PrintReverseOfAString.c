#include<stdio.h>
void reverse(char *str)
{
	int i;
	if(*str){
		reverse(str+1);
		printf("%c",*str);
	}
}
int main()
{
	char str[10];
	scanf("%s",str);
	reverse(str);
	return 0;
}
