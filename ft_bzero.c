void	ft_bzero(void *str, size_t n)
{
	char	*p = str;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
