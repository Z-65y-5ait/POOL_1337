#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				count++;
			i++;
		}
		if (count == 1)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
