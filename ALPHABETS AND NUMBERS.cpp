#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("************WELCOME TO ALPHABETS and NUMBERS MANIA************\n");
	printf("************CAUTION != USE ONLY THREE INTEGERS :: 1,2,0************\n");
	int a, b, c, d, e, f, g;
	printf("\t__________=a\n");
	printf("\t|        |\n");
	printf("\t|=b      |=c=0 if is single line\n");
	printf("\t|        |\n");
	printf("\t__________=d\n");
	printf("\t|        |\n");
	printf("\t|=e      |=f=0 if is single line\n");
	printf("\t|        |\n");
	printf("\t__________=g\n");

	//hint=a,b,c,d,e,f=1 and g=0 would print =>>"A"and similar to numbers
		printf("enter a :\n");
		scanf_s("%d", &a);
		printf("enter b :\n");
		scanf_s("%d", &b);
		printf("enter c\n");
		scanf_s("%d", &c);
		printf("enter d :\n");
		scanf_s("%d", &d);
		printf("enter e :\n");
		scanf_s("%d", &e);
		printf("enter f :\n");
		scanf_s("%d", &f);
		printf("enter g :\n");
		scanf_s("%d", &g);
		if (a == 1)
		{
			printf("* * * *");
		}
		else
		{
			if (a!=1&&a!=2&&a!=2)
			{
			printf("ERROR_451_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
		if (b == 1)
		{
			for (int i = 1; i <= 6; i++)
			{
				if (c==1)
				{
					for (int j = 1; j <= 6; j++)
					{
						if (j==1)
						{
						printf("*");

						}
						else
						{
							printf(" ");
						}
					}
				}
				printf("*\n");
			}
		}
		else
		{
			if (b != 1 && b != 2 && b != 2&&c != 1 && c != 2 && c != 2)
			{
				printf("ERROR_452&453_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
		if (c==0)
		{
			for (int l = 1; l <= 6; l++)
			{
				for (int x = 1; x <= 6; x++)
				{
					printf(" ");
				}
				printf("*\n");
			}
		}
		else
		{
			if (c != 1 && c != 2 && c != 2)
			{
				printf("ERROR_453_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
        if (d == 1)
		{
			printf("* * * *");
		}
		else
		{
			if (d != 1 && d != 2 && d != 2)
			{
				printf("ERROR_454_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
		if (e == 1)
		{
			for (int i = 1; i <= 6; i++)
			{
				if (f == 1)
				{
					for (int j = 1; j <= 6; j++)
					{
						if (j == 1)
						{
							printf("*");

						}
						else
						{
							printf(" ");
						}
					}
				}
				printf("*\n");
			}
		}
		else
		{
			if (e != 1 && e != 2 && e != 2 && f != 1 && f != 2 && f != 2)
			{
				printf("ERROR_455&456_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
		if (f == 0)
		{
			for (int h = 1; h <= 6; h++)
			{
				for (int z = 1; z <= 6; z++)
				{
					printf(" ");
				}
				printf("*\n");
			}
		}
		else
		{
			if (f != 1 && f != 2 && f != 2)
			{
				printf("ERROR_456_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
        if (g == 1)
		{
			printf("* * * *");
		}
		else
		{
			if (g != 1 && g != 2 && g != 2)
			{
				printf("ERROR_457_invalid_number_added_numbers_should_contain_[1,2,0]type_integers\n");
			}
		}
		
		printf("\n\n");
	printf("\n YOU ENTERED THE FOLLOWING::\n a=%d b=%d c=%d d=%d e=%d f=%d g=%d\n", a, b, c, d, e, f, g);
	printf("************THANK YOU FOR USING IT************\n");
	printf("************MADE BY UMAR AHMED************\n");
	printf("*THIS IS MY FIRST PROGRAM BUT IT DOESN'T PRINT 'X','Z','Y','M','N',HOPE ALL LIKE IT!*\n");

	_getch();
}