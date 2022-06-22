#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	unsigned char	*p;

	if (!str)
		return (0);
	p = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (p);
}
