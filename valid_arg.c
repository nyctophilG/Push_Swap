#include "push_swap.h"

static	int is_dup(char **sp)
{
	int	i;
	int	j;

	i = 0;
	while(sp[i])
	{
		j = i + 1;
		while (sp[j])
		{
			
		}
	}
}

static long	ft_atol(char * str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

static char *valid_digit(char *num )
{
	int		i;
	long	temp;

	i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	temp = ft_atol(num);
	if (temp > 2147483647 || temp < -2147483648)
		return (0);
	return (1);
}

static char	*ft_join_it(char ** av)
{
	char 	*joined;
	char 	*temp;
	int		i;

	i = 1;
	joined = ft_strdup("");
	while (av[i])
	{
		temp = ft_strjoin(joined, " ");
		free(joined);
		joined = ft_strjoin(temp, av[i]);
		i++;
	}
	return (joined);
}

char	**is_valid(char **av)
{
	char	*arguments;
	char	**splited;
	int		i;

	i = 0;
	arguments = ft_join_it(av);
	splited = ft_split(arguments, ' ');
	free(arguments);
	if (!splited || !splited[0])
		exit(1);
	while (splited[i])
	{
		if (!valid_digit(splited[i]))
			error_exit(splited);
		i++;
	}
	if (is_dup(splited))

}
