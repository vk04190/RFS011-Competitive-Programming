#include<stdio.h>
#include<ctype.h>
#define EOL '\n'

main()
{
char letter[80];
int tag, count, linecount = 1;
while((letter[0] = getchar()) !='*')	{
for(count = 1; (letter[count] = getchar()) != EOL; ++count)
	;
tag = count;

for (count = 0; count < tag; ++count)
	putchar(toupper(letter[count]));
	printf("\n\n");
	++linecount;

	for (count = 1; count < tag; ++count)
	if(letter[count-1] == '$' && letter[count] == '$')	{
	printf("Break Condition Detected - TERMINATE EXECUTION\n\n");
	goto end;
	}
	}
	end: printf("GOOD BYE");
	}