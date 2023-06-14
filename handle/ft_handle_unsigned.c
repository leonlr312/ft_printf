#include"../ft_printf.h"

static char	*ft_unsigned_itoa(unsigned int n)
{
	char buffer[12];
	int index = 11;
	buffer[index--] = '\0';

	if (n == 0)
		buffer[index--] = '0';
	else
	{
		while (n != 0)
		{
			buffer[index--] = n % 10 + '0';
			n /= 10;
		}
	}
	return ft_strdup(&buffer[index+1]);
}

int	ft_handle_unsigned(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_unsigned_itoa(nb);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
