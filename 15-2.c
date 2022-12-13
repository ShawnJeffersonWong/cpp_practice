# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
 
# define SIZE 33
 
int str_bstr(char * st);
char * del_space(char * st);
int btoi(char * st);
void print_bstr(unsigned int n);
 
int main(void)
{
	char argv[3][SIZE] = {"a.exe" , "a0101b" , "341010"};
	int num1 , num2 ;
 
	str_bstr(argv[1]) ;
	str_bstr(argv[2]) ;
	
	num1 = btoi(del_space(argv[1]));
	num2 = btoi(del_space(argv[2]));
 
	printf("~%s == " ,argv[1]);
	print_bstr(~num1);
	putchar('\n');
 
	printf("~%s == " ,argv[2]);
	print_bstr(~num2);
	putchar('\n');
 
	printf("%s & %s == " , argv[1] , argv[2]);
	print_bstr(num1 & num2);
	putchar('\n');
 
	printf("%s | %s == " , argv[1] , argv[2]);
	print_bstr(num1 | num2);
	putchar('\n');
 
	printf("%s ^ %s == " , argv[1] , argv[2]);
	print_bstr(num1 ^ num2);
	putchar('\n');
 
	return 0 ;
}
 
int str_bstr(char * st)
{
	int cur = 0 ; 		
	char ch ; 
 
	for (int i = 0 ; st[i]; i++)
		if((isdigit(st[i]) && st[i] < '2') || isspace(st[i]))
		{
			ch = st[cur] ;
			st[cur] = st[i] ;
			st[i] = ch ;
 
			cur++ ;
		}
 
	st[cur] = '\0' ;
 
	return cur ;
}
 
char * del_space(char * st)
{
	int i = 0 ;
	char * find = NULL ;
 
	while (find = strchr(st , ' '))
	{
		for (i = 0 ; find[i] ; i++)
			find[i] = find[i + 1] ;
	}
 
	return st ;
}
 
int btoi(char * st)
{
	int number = 0 ;
 
	for (int i = 0 ; st[i] ; i++)
	{
		number <<= 1 ;
		number |=  (st[i] - '0');
	}
 
	return number ;
}
 
void print_bstr(unsigned int n)
{
	static long loop = 0;
 
	if (!loop && !n)
	{
		putchar('0');
		return ;
	}
 
	if (n)
	{
		loop++ ;
		print_bstr(n / 2) ;
	}
	else
		return  ;
 
	putchar('0' + (n % 2));
	if ((--loop % 4)== 0)
		putchar(' ');
}