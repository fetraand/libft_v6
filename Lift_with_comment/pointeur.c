#include <stdio.h>

int main(void)
{
	char *s = "Hello";
	while (*s) 
	{
    	printf("%c ", *s);  // Affiche H e l l o
	    s++;
	}
}
