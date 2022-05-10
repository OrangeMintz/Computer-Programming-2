//Djeikuje Nickolai C. Gacus
//Major Activity 3.0 - C Strings

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[69];
    int i, j, len, rev, word;

        printf("Enter any String: ");
        gets(str);

  	len = strlen(str);
  	word = len - 1;

        printf("Reversed ordered words\n");
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				rev = 0;
			}
			else
			{
				rev = i + 1;
			}
			for(j = rev; j <= word; j++)
			{
				printf("%c", str[j]);
			}
			word = i - 1;
			printf(" ");
		}
	}

    return 0;
}
