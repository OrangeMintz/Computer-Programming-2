//Djeikuje Nickolai C. Gacus
//Min And Max

#include <stdio.h>
int main()
{
    printf("Input 10 numbers: \n");
    int num = 0;
    scanf("%d", &num);
    int min=num, max=num;
    for (int i = 1; i<=9; i++) {
        scanf("%d", &num);
            min = (num < min) ? num : min;
            max = (num > max) ? num : max;
    }
        printf("\nMin=%d \nMax=%d \n", min, max);
    return 0;
}
