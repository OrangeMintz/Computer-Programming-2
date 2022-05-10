//Djeikuje Nickolai C. Gacus
//C File Handling

#include <stdio.h>
#include <stdlib.h>
int main()
{

FILE*fptr;
    char str[100];
    int number;
    int n = 0;

fptr = fopen("D:\\thisisText.txt", "a");
        printf("Input how many lines to be appended: ");
        scanf("%d", &number);
    if(number < n){
        printf("INVALID");
        return 0;
    }else if(number == 0){
        printf("INVALID");
return 0;

    }else
        while(n<number){
        scanf("%s", &str);
    fprintf(fptr, "\n", str);
    fputs(str, fptr); ++n;
    }
        printf("Data written succesfully!");
    fclose(fptr);
return 0;
  }
