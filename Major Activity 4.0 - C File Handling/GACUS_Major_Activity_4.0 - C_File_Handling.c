//Djeikuje Nickolai C. Gacus
//Major Activity 4.0 - C File Handling

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fptr;
        int i, n;
        int id, math, science, english, sum = 0, average = 0;
        char name[255];

        char str[100];
        char fname[20];

            printf("Input how many students to be appended: ");
            scanf("%d", & n);
        for (i = 0; i < n; i++) {

            printf("\nInput the file name: ");
            scanf("%s", fname);
    fptr = fopen(fname, "w");
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);


            printf("\nEnter student name: ");
    fgets(name, sizeof name, stdin);
            printf("Student ID Number:");
            scanf("%d", &id);
            printf("Math Grade:");
            scanf("%d", &math);
            printf("Science Grade:");
            scanf("%d", &science);
            printf("English Grade:");
            scanf("%d", &english);
            printf("Data written succesfully!\n");

    sum = math + science + english;
    average = sum / 3;

      fprintf(fptr, "\nStudent Name: %s", name);
      fprintf(fptr, "\nStudent ID number: %d", id);
      fprintf(fptr, "\nMath Grade: %d", math);
      fprintf(fptr, "\nScience Grade: %d", science);
      fprintf(fptr, "\nEnglish Grade: %d", english);
      fprintf(fptr, "\nTotal grade: %d", sum);
      fprintf(fptr, "\nGrade average: %d", average);
        }
  return 0;
}
