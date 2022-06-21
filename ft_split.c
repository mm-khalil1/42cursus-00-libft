#include <libft.h>
#include <stdlib.h>

int	count_words(const char *str, char c)
{
	int	count;
	int	i;
	char	*dil;

	count = 0;
	i = 0;
	while (str[i])
	{
		dil = ft_strchr(str + i, c);
		if (!dil && i < ft_strlen(str) - 1){
			count++;
			i = ft_strlen(str) - 1;
		}
		else {
			i = (int) (dil - str);
			if (dil && i > 0 && str[i - 1] != 0) 
				count++;
		}
		i++;
	}
	return (count);
}

char	*isword(const char *s, char c)
{


}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	**split;
	int	words_count;

	if (!s || !c)
		return (0);
	words_count = count_words(s, c);
	split = malloc(sizeof(char) * (words_count + 1));
	if (!split)
		return (0);
	i = 0;
	while (i < words_count){
		
	}
	split[i] = 0;
	return (split);
}
