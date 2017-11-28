#include <stdio.h>
/*
	Comment
*/
#define OK 1
#define FT(x)int main(){ x }
#define MAIN FT(char *c = "#include <stdio.h>%c/*%c%cComment%c*/%c#define OK 1%c#define FT(x)int main(){ x }%c#define MAIN FT(char *c = %c%s%c;FILE *fd = fopen(%cGrace_kid.c%c,%cw%c);%c%cfprintf(fd,c,10,10,9,10,10,10,10,34,c,34,34,34,34,34,92,10,10,10);return (0);)%cMAIN%c";FILE *fd = fopen("Grace_kid.c","w");\
fprintf(fd,c,10,10,9,10,10,10,10,34,c,34,34,34,34,34,92,10,10,10);return (0);)
MAIN
