#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (!str1 || !str2)
		return (0);
	i = 0;
	while (str1[i] && str2[i] && i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
