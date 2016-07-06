#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */
int getlinea(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
main()
{
int len; /* current line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
max = 0;
while ((len = getlinea(line, MAXLINE)) > 0)
{
if (len > max) {
max = len;
copy(longest, line);
}
	printf("%3d: %s", len, line);	//
}
if (max > 0) /* there was a line */
printf("Longest line: %s", longest);
return 0;
}
/* getlinea: read a line into s, return length */
int getlinea(char s[],int lim)
{
int c, i;
for (i=0; i < lim-2 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;

/*
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
*/
	s[i] = '\n';
	s[i+1] = '\0';
	if(i == lim -2)
	while ( (c=getchar()) != '\n')
		i++;
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
