#include "libft.h"

// Fonction auxiliaire : compter le nombre de mots
static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// Fonction auxiliaire : extraire un mot
static char	*get_word(char const *s, char c, size_t *index)
{
	char	*word;
	size_t	start;
	size_t	end;
	size_t	len;

	// Passer les délimiteurs
	while (s[*index] == c)
		(*index)++;
	
	// Trouver début et fin du mot
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	end = *index;
	
	// Allouer et copier le mot
	len = end - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	
	ft_memcpy(word, &s[start], len);
	word[len] = '\0';
	
	return (word);
}

// Fonction auxiliaire : libérer la mémoire en cas d'erreur
static void	free_all(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

// Fonction principale
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	j;

	// 1. Vérifier l'entrée
	if (!s)
		return (NULL);
	
	// 2. Compter le nombre de mots
	word_count = count_words(s, c);
	
	// 3. Allouer le tableau principal (+1 pour le NULL final)
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	
	// 4. Extraire chaque mot
	i = 0;
	j = 0;
	while (j < word_count)
	{
		result[j] = get_word(s, c, &i);
		if (!result[j])
		{
			free_all(result, j);
			return (NULL);
		}
		j++;
	}
	
	// 5. Terminer le tableau avec NULL
	result[j] = NULL;
	
	// 6. Retourner le résultat
	return (result);
}