#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;

	if (!str)
		return (0);
	p = (unsigned char *) str;
	while (n > 0)
	{
		if (*p == (unsigned char) c)
			return ((void *)p);
		n--;
		p++;
	}
	return (0);
}
