#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!str1 || !str2)
		return (0);
	p1 = (unsigned char *) str1;
	p2 = (unsigned char *) str2;
	while (n > 0 && str2 && str1)
        {
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
