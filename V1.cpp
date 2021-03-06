﻿// V1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

double check()
{
	char check[CHAR_MAX] = { "0" };
	scanf("%s", &check);
	double per;

	while (true) {
		per = atof(check);
		if (per < INT_MIN || per > INT_MAX || per == 0) 
		{
			printf("Incorrect value!!!\n");
			printf("Enter again the first cathetus: ");
			scanf("%s", &check);
		}
		else 
		{
			break;
		}
	}
	printf("\n");
	return per;
}

int main()
{
	printf("Enter the first cathetus: ");
	double kat1 = check(); 
	
	printf("Enter the second cathetus: ");
	double kat2 = check();
	
	double hyp = sqrt(kat1 * kat1 + kat2 * kat2); 
	printf( "Hypotenuse: %f\n", hyp);

	system("pause");
	return 0;
}
