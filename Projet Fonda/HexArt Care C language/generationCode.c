#include <stdlib.h>
#include <stdio.h>



void generationCode(int valeurMenu)
{
	FILE* fichier = NULL;

	fichier = fopen("param.h", "w");

	if (fichier != NULL)
	{
		fprintf(fichier, "#define MODE %d", valeurMenu);
		fclose(fichier);

		fclose(fichier); 
	}
}
