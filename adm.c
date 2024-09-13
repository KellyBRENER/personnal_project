#include "adp.h"

void	init_activity(activity *activity)
{
	activity->activity_name = malloc(41 * sizeof(char));
	printf("Enter activity's name (40 caracters max): ");
	scanf("%40s", activity->activity_name);
	activity->date_of_creation = 
}

void	read_file(char *file_name, activity *activity)
{
	if (activity == NULL)
		init_activity(activity);

}

int	main(int argc, char **argv)
{
	int	i;
	activity	*activity;

	i = 1;
	activity = NULL;
	if (argc < 2)
		perror("at list one file must be provided");
	while (argv[i] && i <= argc)
		read_file(argv[i++], activity);
}
