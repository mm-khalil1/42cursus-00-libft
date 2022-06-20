#include <libft.h>
#include <stdlib.h>

int	count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (ft_strchr(str, c) == 0)
			return (count);
		count++;
		str = ft_strchr(str, c) + 1;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	**split;
	char	*found;

	if (!s || !c)
		return (0);
	split = malloc(sizeof(char) * (count_words(s, c) + 1));
	if (!split)
		return (0);
	i = 0;
	while (*s){
		found = ft_strchr(s, c);
		if (!found)
			break;
		split[i] = ft_substr(s, 0, found - s);
		i++;
		s = found + 1;
	}
	return (split);
}
