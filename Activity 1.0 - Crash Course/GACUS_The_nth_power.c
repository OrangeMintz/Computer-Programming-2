//Djeikuje Nickolai C. Gacus
//The nth Power

#include <stdio.h>

int main(){
    int x, y;
    int cal = 1.0;
            printf("Enter X value: ");
        scanf("%d", &x);
            printf("Enter Y value: ");
        scanf("%d", &y);

        while (y != 0){
            cal *= x; --y;
        }
        printf("\nResult = %d\n", cal);
return 0;
    }
