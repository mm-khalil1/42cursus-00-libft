void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;
	unsigned char	*p;

	p = (unsigned char *) str;
	if (str == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (p);
}
