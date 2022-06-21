#include <libft.h>

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
		if (!dil){
			count++;
			i = ft_strlen(str) - 1;
		}
		else {
			i = (int) (dil - str);
			if (dil && i > 0 && str[i - 1] != c) 
				count++;
		}
		i++;
	}
	return (count);
}

int	next_chr(const char *s, char c, size_t i)
{
	while (s[i] == c && s[i])
		i++;
	if (!s[i])
		return (i - 1);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	first_ind;
	char	**split;

	split = malloc(sizeof(char) * (count_words(s, c) + 1));
	if (!s || !c || !split)
		return (0);
	i = 0;
	j = 0;
	first_ind = -1;
	while (i <= ft_strlen(s)){
		if (s[i] != c && first_ind == -1)
			first_ind = i;
		if ((s[i] == c || s[i] == 0) && first_ind > -1)
		{
			split[j++] = ft_substr(s, first_ind, i - first_ind);
			i = next_chr(s, c, i + 1);
			first_ind = i;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
