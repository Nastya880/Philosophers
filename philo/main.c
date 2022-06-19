#include "philo.h"

static int	check_args(int argc, char **argv, t_args *args)
{
	if (argc == 5 || argc == 6)
	{
		args->number_of_philosophers = ft_atoi(argv[1]);
		args->time_to_die = ft_atoi(argv[2]);
		args->time_to_eat = ft_atoi(argv[3]);
		args->time_to_sleep = ft_atoi(argv[4]);
		args->time_must_eat = -1;
		if (argc == 6)
			args->time_must_eat = ft_atoi(argv[5]);
		if (args->num <= 0 || args->time_to_die <= 0 || args->time_to_eat <= 0
			|| args->time_to_sleep <= 0 || (argc == 6 && args->time_must_eat <= 0))
			return (0);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_args		args;
	pthread_t	*threads;

  //standart check
	if (!check_args(argc, argv, &args))
		printf("Error\n");
	else
	{
		threads = malloc(args.number_of_philosophers + 1);
		if (!threads)
			return (1);
	//need initialize
	}
	return (0);
}
