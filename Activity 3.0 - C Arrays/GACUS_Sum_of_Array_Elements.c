//Djeikuje Nickolai C. Gacus
//Sum Of Array Elements

#include<stdio.h>

int main()
{
    int con[10], size, i, sum = 0;
        printf("Enter the size of the Array: ");
        scanf("%d",&size);
    if(size <= 10 && size > 4 ) {

    for(i = 0; i < size; i++){
        printf("Enter Elements %d: ",i+1);
        scanf("%d",&con[i]);
        }

    for(i = 0; i < size; i++)
          sum = sum + con[i];

        printf("\nSum of all array elements = %d\n",sum);

return 0;
}
    else{
        printf("\nArray Size limit is 5-10\n");
        }

return 0;
}
