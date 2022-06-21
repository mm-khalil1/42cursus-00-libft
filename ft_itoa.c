#include <libft.h>

int	count_digits(int n){
	int	count;

	count = 1;
	if (n == -2147483648)
		return (10);
	else if (n < 0)
		n = n * -1;
	if (n > 0){
		while (n > 9){
			n /= 10;
			count++;
		}
	}
	return (count);
}

void	ft_putnbr(int n, int i){
	if (n > 10){
		ft_putnum(n, i);

}

char	*ft_itoa(int n)
{
	char	*num;
	int	i;

	num = (char *) malloc(sizeof(char) * (count_digits(n) + 1));
	if (!num)
		return(0);
	i = 0;
        if (n == -2147483648){
		num[0] = '-';
		num[1] = '2';
		num = 147483648;
		i = 2;
	}
        else if (n < 0){
		num[0] = '-';
                n = n * -1;
		i = 1;
	}
	ft_putnbr(n, i);
	return (num);
}
