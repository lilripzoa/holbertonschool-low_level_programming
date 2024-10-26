#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - that prints every minute of the day.
 *
 * Return: always 0.
 */

void jack_bauer(void)
{
	long int minute_dizaine;
	long int minute_unite;
	long int heure_dizaine;
	long int heure_unite;

	for (heure_dizaine = '0'; heure_dizaine <= '2'; heure_dizaine++)
		for (heure_unite = '0'; heure_unite <= '3'; heure_unite++)
			for (minute_dizaine = '0'; minute_dizaine <= '5'; minute_dizaine++)
				for (minute_unite = '0'; minute_unite <= '9'; minute_unite++)
				{
					_putchar(heure_dizaine);
					_putchar(heure_unite);
					_putchar('\72');
					_putchar(minute_dizaine);
					_putchar(minute_unite);
					_putchar('\n');
				}

	_putchar('\n');


}
