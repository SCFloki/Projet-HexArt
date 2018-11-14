#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

void menuPrincipal() 
{
	int valeurMenu = 0;

	printf("Choisir la configuration des LEDs :\n");
	printf("1. Toutes les LEDs allumees\n");
	printf("2. Allumer une LED sur deux\n");
	printf("3. Allumer une LED sur trois\n");
	printf("4. Allumer les LEDS une par une\n");

	scanf_s("%d", &valeurMenu);
	
	if(valeurMenu >= 0 && valeurMenu <= 4)
	{
		printf("Vous avez choisi le programme %d \n", valeurMenu);
		generationCode(valeurMenu);
	}
}