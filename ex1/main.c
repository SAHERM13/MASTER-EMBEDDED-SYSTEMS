/*
 * main.c
 *
 *  Created on: ٠١‏/٠١‏/٢٠٢٣
 *      Author: saher
 */

#include<stdio.h>

int main ()
{
int num;
    printf("enter a value you want to check\r\n");
    fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	if ((num%2)==0)
	{
		printf ("%d is even.",num);
	}
	else {
		printf ("%d is odd.",num);
	}
	return 0;
}

