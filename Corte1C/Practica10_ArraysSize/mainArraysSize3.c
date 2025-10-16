#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double myValues[] = {2.1, 3.2, 4.3, 5.4};
	int length = sizeof(myValues) / sizeof(myValues[0]);
	
	printf ("%d", length);
	
	return 0;
}
