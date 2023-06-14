#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

int ft_printf(const char *print, ...);

//Utils
int		ft_strlen(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa_base(size_t n, char *base);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(char *src);

//Handles
int		ft_handle_character(char s);
int		ft_handle_decimal(int	nbr);
int		ft_handle_hex_lower(unsigned int num);
int		ft_handle_hex_upper(unsigned int num);
int		ft_handle_percent(void);
int		ft_handle_pointer(unsigned long *pointer);
int		ft_handle_string(char *str);
int		ft_handle_unsigned(unsigned int nb);

#endif
