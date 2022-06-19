#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{	
	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (*s1 != 0)
	{
		if (ft_strncmp(s1, s2, n) != 0)
			return ((char *)s1);
		else
			s1++;
	}
	return (0);
}
