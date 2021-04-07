/*
 ============================================================================
 Name        : AlgoritmoBubbleBobble.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecabuble.h"

#define sizeArray 5

int main(void)
{
	setbuf(stdout,NULL);


	int ArrayValores [sizeArray] = {80,23,5,8,10};


	ArrayBubbleBobble(ArrayValores, sizeArray);


	printArray(ArrayValores, sizeArray);




	return EXIT_SUCCESS;
}
