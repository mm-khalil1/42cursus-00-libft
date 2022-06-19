char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (*str != 0)
	{
		len++;
		str++;
	}
	while (*str != c && len > 0)
		str--;
	if (*str == c)
		return ((char *)str);
	return (0);
}
