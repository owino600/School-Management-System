#include "school.h"
int main(void)
{
	char firstname[100];
	char lastname[100];
	char year[5];
	char month[3];
	char day[3];
	char gender[20];
	int choice;
	while (1)
	{
		sleep(2.5);

		username(firstname, lastname);
		birthdate(day, month, year);
		genderchoice(gender);
		sleep(2);

		choice = submitOrDelete();
		if (choice == 1)
		{
			sleep(2);
			break;
		}
		else if (choice == 2)
		{
			sleep(2);
			printf("please choose item to delete");
			continue;
		}
		else
		{
			printf("Invalid Choice\n");
			continue;
		}
		break;
	}

	printf("forms submitted.\n");
	return (0);
}
