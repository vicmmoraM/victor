/*
	Descripcion: functions file that contains the functions for counting words
	Last Modify: 2022-06-15
	Modify by: @rafariva
*/

#include "functions.h"

int count_words(FILE *file){
	int count = -1;

	/* TO-DO: add code for counting words */
	/* TIP: use function fscanf (for read file/words) in a while tilin*/
	
	char  palabra[MAXWORD];
	int n = 0;
	if(file != NULL){
		count = 0;
		while((n = fscanf(file, "%s", palabra)) > 0)
			count++;
	}
	return count;
}
