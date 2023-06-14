#include"../ft_printf.h"

int	ft_handle_hex_upper(unsigned int num)
{
	int		len;
	char	*str;

	str = ft_itoa_base(num, HEX_BASE_UPPER);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
