int	ft_atoi(const char *nptr)
{
	int result;
	int flag;

	result = 0;
	flag = 1;
	while ((*nptr >= 0)&&(*nptr <= 44)||(*nptr >= 58)&&(*nptr <= 127))
		nptr++;
	if (*nptr == 45)
		flag = 0;
	while ((*nptr >= 48)&&(*nptr <= 57))
	{
		result = result * 10 + *nptr - 48;
		nptr++;
	}
	if (!flag)
		result = -result;
	return result;
}
