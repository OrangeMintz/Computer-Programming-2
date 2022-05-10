//Djeikuje Nickolai C. Gacus
//C Strings

#include<stdio.h>
#include <string.h>

 int main()
{
    char str[100];
    int  i,len,vowel,consonants;
    int lenght=0;
        printf("Input a sentence: ");

    fgets(str, sizeof str, stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i'
        ||str[i]=='o' ||str[i]=='u') str[i]=str[i]-32;

        i++;
    }
    printf("\nString Converted:");
    puts(str);

    while(str[lenght]!='\0')
    {
      lenght++;
   }
        vowel = 0;
    consonants = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
        }
    }
        printf("String Length: %d\n", lenght-1);
        printf("Vowel: %d\n", vowel);
        printf("Consonant: %d\n", consonants);
    return 0;
}
