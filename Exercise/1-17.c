#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define REQUIRED_LENGTH 40
int getlinea(char line[], int maxline);
void copy(char to[], char from[]);
/* printf longest input line */
main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
//max = 0;
while ((len = getlinea(line, MAXLINE)) > 0) {
	if(len > REQUIRED_LENGTH)
		printf("%3d: %s", len, line);
}
}
/* getlinea: read a line into s, return length */
int getlinea(char s[], int lim)
{
	int c, i, j;
	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 2) {
			s[j] = c; /* line still in boundaries */
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
int i;
i = 0;
while ((to[i] = from[i]) != '\0')
++i;
}
