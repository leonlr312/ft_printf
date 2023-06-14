#include"../ft_printf.h"

int	ft_handle_pointer(unsigned long *pointer)
{
	char	*str;
	int		len;

	if(!pointer)
	{
		ft_putstr_fd("(nil)", 1);
		return(5);
	}
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	str = ft_itoa_base((unsigned long)pointer, HEX_BASE_LOWER);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len + 2);
}
