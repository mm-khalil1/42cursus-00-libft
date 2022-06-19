#include <stdlib.h>
#include <libft.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	void	*p;
	
	p = malloc(nitems * size);
	if (!p)
		return (0);
	ft_bzero(p, size * nitems);
	return (p);
}
