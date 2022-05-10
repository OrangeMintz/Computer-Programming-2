//Djeikuje Nickolai C. Gacus
//Decimal to binary, Octal, Hexadecimal

#include<stdio.h>
void convert(int, int);

int main()
{
    int number;
        printf("Enter Decimal Integer : ");
            scanf("%d", &number);
        printf("\nBinary : ");
            convert(number, 2);

        printf("\nOctal : ");
            convert(number, 8);

        printf("\nHexadecimal : ");
            convert(number, 16);
    return 0;
}

void convert (int number, int base)
{
        int reminder = number%base;

        if(number==0)
                return;
        convert(number/base, base);

        if(reminder < 10)
                printf("%d", reminder);
        else
                printf("%c", reminder-10+'A' );
}
