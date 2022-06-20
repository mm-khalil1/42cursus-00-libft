#include <stdlib.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	unsigned int	i;

	sub = malloc(len * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
