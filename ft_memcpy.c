#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t		i;

	if (!dest || !src)
		return (0);
	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;
	i = 0;
	while (i < n && src && dest)
	{
		pd[i] = ps[i];
		i++;
	}
	return (pd);
}
