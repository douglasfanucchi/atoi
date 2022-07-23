int	ft_atoi(char *str)
{
	int store;
	int	signal;

	store = 0;
	signal = 1;
	while(*str == '-')
	{
		signal *= -1;
		str++;
	}
	while (*str)
	{
		if(ft_isspace(*str))
		{
			str++;
			continue;
		}
		if(!ft_is_nbr(*str))
			return (0);
		store *= 10;
		store += *str - '0';
		str++;
	}
	return (store * signal);
}
