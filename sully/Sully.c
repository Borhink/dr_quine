#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int i = 5;
extern char *__progname;
int main()
{
	char *c = "#include <unistd.h>%c#include <stdio.h>%c#include <stdlib.h>%cint i = %d;%cextern char *__progname;%cint main()%c{%c	char *c = %c%s%c;%c	char src[64] = {0}, exe[64] = {0}, gcc[256] = {0};%c	if (__progname[0] == 0)%c		i--;%c	sprintf(src, %cSully_%cd.c%c, i);%c	sprintf(exe, %cSully_%cd%c, i);%c	FILE *fd = fopen(src, %cw%c);%c	fprintf(fd,c,10,10,10,i,10,10,10,10,34,c,34,10,10,10,10,34,37,34,10,34,37,34,10,34,34,10,10,10,34,37,37,34,10,10,10,10,10);%c	fclose(fd);%c	sprintf(gcc, %cgcc -Wall -Wextra -Werror %cs -o %cs%c, src, exe);%c	system(gcc);%c	if (i > 0)%c		execv(exe, NULL);%c}%c";
	char src[64] = {0}, exe[64] = {0}, gcc[256] = {0};
	if (__progname[0] == 0)
		i--;
	sprintf(src, "Sully_%d.c", i);
	sprintf(exe, "Sully_%d", i);
	FILE *fd = fopen(src, "w");
	fprintf(fd,c,10,10,10,i,10,10,10,10,34,c,34,10,10,10,10,34,37,34,10,34,37,34,10,34,34,10,10,10,34,37,37,34,10,10,10,10,10);
	fclose(fd);
	sprintf(gcc, "gcc -Wall -Wextra -Werror %s -o %s", src, exe);
	system(gcc);
	if (i > 0)
		execv(exe, NULL);
}
