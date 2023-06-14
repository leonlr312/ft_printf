#include"../ft_printf.h"

int	ft_handle_decimal(int nbr)
{
	size_t	number;

	number = 1;
	ft_putnbr_fd(nbr, 1);
	while (nbr >= 10 || nbr <= -10)
	{
		nbr /= 10;
		number++;
	}
	if (nbr < 0)
		return (number + 1);
	return (number);
}
