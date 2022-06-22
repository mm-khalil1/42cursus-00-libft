#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*p;

	if (!str)
		return (0);
	p = str;

	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
