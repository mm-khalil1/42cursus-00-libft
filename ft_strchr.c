#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != c && *str != 0)
		str++;
	if (*str == c)
		return ((char *)str);
	return (0);
}
