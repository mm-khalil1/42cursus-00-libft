char	*ft_strchr(const char *str, int c)
{
	while (*str != c && *str != 0)
		str++;
	if (*str == c)
		return (str);
	return (0);
}
