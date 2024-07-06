/* LORENZO DONAIRE */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "DONAIREMPfunc.c"
/* Will later include the separate file for function (DONAIRE_MPfunc.c) */ 



int main()
{
	struct userinformation userinfo[10]; 
	
	mainMenu(userinfo); /* Will call the main menu function where the program starts. */ 
	
	return 0;
}



