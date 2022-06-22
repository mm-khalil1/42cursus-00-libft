#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	str += len - 1;
	while (*str != c && len > 0)
		str--;
	if (*str == c)
		return ((char *)str);
	return (0);
}
