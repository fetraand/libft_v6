int	main(void)
{
	char *n = "  -1245sdf";
	char c[] = "  +123f5sdf";


	printf("Or: %d\n", atoi(n));
	printf("My: %d\n", ft_atoi(n));

	printf("Or: %d\n", atoi(c));
	printf("My: %d\n", ft_atoi(c));

	printf("Or: %d\n", atoi("143"));
	printf("My: %d\n", ft_atoi("143"));
}
// The original atoi is in the Library <stdlib.h>

//printf("Code ASCII de '0': %d\n", '0');
//printf("Hello \rWorld");
/*
printf("%d\n", atoi("123"));      // Littéral de chaîne
printf("%d\n", atoi(tableau));    // Tableau (décay en pointeur)
printf("%d\n", atoi(pointeur));   // Pointeur directement
*/
