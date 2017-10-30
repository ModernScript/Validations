#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void EnterNumber(char arg_num[]);

int main()
{
	char number[128];

	EnterNumber(number);
	system("pause");
	return 0;
}

void EnterNumber(char arg_num[])
{
	int lenght = 0;
	char symbol;
	
	begin:printf("Enter code:");
	while ((symbol = _getch()) != '\r')
	{
		if ((lenght>=0 &&lenght<=2) && (symbol >= 'A' && symbol <= 'Z'))
		{
			_putch(symbol);
			arg_num[lenght] = symbol;
			lenght++;
		}
		if ((lenght>=3 && lenght <= 7) && (symbol >= '0' && symbol <= '9'))
		{
			_putch(symbol);
			arg_num[lenght] = symbol;
			lenght++;
		}
		if ((lenght>=7&&lenght <= 10) && (symbol >= 'a' && symbol <= 'z'))
		{
			_putch(symbol);
			arg_num[lenght] = symbol;
			lenght++;
		}
		if(lenght>10)
		{
			
		}
		if (symbol == '\b')
		{
			if (lenght == 0)
			{
				
			}     
			arg_num[lenght] = ' ';
				_putch('\b');
			    _putch(' ');
				_putch('\b');
				lenght--;
			
	     }
	 }
	arg_num[lenght] = '\0';
	printf("\n the masiv is:%s \n", arg_num);
}
	


