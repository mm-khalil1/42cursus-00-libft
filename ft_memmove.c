#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n){
	size_t		i;
	unsigned char	temp[n + 1];
	unsigned char	*psrc;
	unsigned char	*pdest;

	if (!dest || !src)
		return (0);
	psrc = (unsigned char *)(src);
	pdest = (unsigned char *)(dest);
	i = 0;
	while (i < n && psrc[i]){
		temp[i] = psrc[i];
		i++;
	}
	temp[i] = 0;
	i = 0;
	while (i < n && psrc[i]){
		pdest[i] = temp[i];
		i++;
	}
	pdest[i] = 0;
	return (pdest);
}
