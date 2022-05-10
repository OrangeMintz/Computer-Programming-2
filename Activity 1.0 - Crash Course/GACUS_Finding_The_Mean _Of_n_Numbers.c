//Djeikuje Nickolai C. Gacus
//Finding the mean of N numbers

#include <stdio.h>
int main()
{
    int num, sum = 0;
    do{
        printf("Enter Integer: ");
    scanf("%d", &num);
        sum += num;
    }
    while(num != 0.0);
        printf("\nAverage= %d", sum/2);
    return 0;
}
