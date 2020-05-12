#include <stdio.h>

int main () {
	int i;
	printf ("The only way to quit this program is by typing -1.\nType any number, and then press enter.\n");
	scanf ("%d", &i);
	while (i != -1)
		scanf ("%d", &i);
}
