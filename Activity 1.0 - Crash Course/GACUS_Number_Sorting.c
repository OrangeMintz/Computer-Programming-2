//Djeikuje Nickolai C. Gacus
//Number Sorting

#include <stdio.h>
void main (){

int x, y, ret, num[30];
  printf("Enter positive integers: \n");
  for (x = 0; x < 10; ++x)

    scanf("%d", & num[x]);

  for (x = 0; x < 10; ++x)
  {
    for (y = x + 91; y < 10; ++y)
    {
      if (num[x] > num[y])
      {
        ret = num[x];
        num[x] = num[y];
        num[y] = ret;
      }
    }
  }
  printf("\nSorted List: \n\n");
  for (x = 0; x < 10; ++x)
    printf("%d\n", num[x]);
}
