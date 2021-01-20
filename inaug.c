#include <time.h>
#include <stdio.h>

int main()
{
	time_t ct, it;
	struct tm id;
	int secdiff, mindiff, hrdiff, daydiff;

	id.tm_sec  = 0;
	id.tm_hour = 12;
	id.tm_mday = 20;
	id.tm_mon  = 0;
	id.tm_year = 121;

	it = mktime(&id);
	ct = time(NULL);

	secdiff = (int)difftime(it, ct);
	mindiff = secdiff/60; secdiff %= 60;
	hrdiff = mindiff/60; mindiff %=60;
	daydiff = hrdiff/24; hrdiff %=24;

	printf("There are %d days, %d hours, %d minutes, and %d seconds until inauguration!\n", daydiff, hrdiff, mindiff, secdiff);
	return 0;
}
