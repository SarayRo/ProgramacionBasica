#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i = 10;
	
inicio:
    if (i < 16) {
    	printf ("i - %d\n", i);
    	i++;
    	goto inicio;
	}
	return 0;
}
