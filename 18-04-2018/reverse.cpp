/* reverse.c */

#include <stdio.h>
#include <string.h>

char * reverse( char * s )
{
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}


int main( void )
{
    char str[100];
    printf(" Favor digitar uma Palavra: \n");
	scanf("%99s", str);
	printf(" A palavra invertida e :  \n");
    printf("%s\n", reverse(str) );

    return 0;
}

/* fim-de-arquivo */
