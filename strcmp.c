#include <unistd.h>

int	strcmp(const char *s1, const char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

int	main(void)
{
	char	*s1;
	char	*s2;
    
	s1 = "Hello";
	s2 = "Hellop";
	int result = strcmp(s1, s2);

	if (result > 0)
	{
		write(1, "S1 est superieur", 17);
	}
	else if (result < 0)
	{
		write(1, "S2 est negatif", 14);
	}
	else
	{
		write(1, "ils  sont egaux", 15);
	}
   
}
