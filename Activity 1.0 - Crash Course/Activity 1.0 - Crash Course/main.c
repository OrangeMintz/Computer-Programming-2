#include<stdio.h>
void main()
{

    printf(" ||Juan Tamad Grades|| \n\n");

    /* letter grade set for subject 1 */
    int S1;
    printf("Enter marks obtained in Philippine Indigenous: ");
    scanf("%d",&S1);
    //Letter grade equation used on if else method for letter grade subject 1


    if(S1<0 || S1>100) /* any number lesser than 0 and are greater than 100 are considered invalid */
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S1>=0 && S1<=49) /* numbers ranging from  0 to 49 are considered F Grade*/
    {
        printf("Grade F \n\n");
    }
        else if(S1>=50 && S1<=59) /* numbers ranging from  50 to 59 are considered D Grade*/
    {
        printf("Grade D \n\n");
    }
        else if(S1>=60 && S1<=67) /* numbers ranging from  60 to 67 are considered C Grade*/
    {
        printf("Grade C \n\n");
    }
        else if(S1>=68 && S1<=75) /* numbers ranging from  68 to 75 are considered -B Grade*/
    {
        printf("Grade -B \n\n");
    }
    else if(S1>=76 && S1<=83) /* numbers ranging from  76 to 83 are considered B Grade*/
    {
        printf("Grade B \n\n");
    }
    else if(S1>=84 && S1<=91) /* numbers ranging from  84 to 91 are considered -A Grade*/
    {
        printf("Grade -A \n\n");
    }
    else if(S1>=92 && S1<=100) /* numbers ranging from  92 to 100 are considered A Grade*/
    {
        printf("Grade A \n\n");
    }



    int S2;
    printf("Enter marks obtained in Computer Programming 2: ");
    scanf("%d",&S2);
    if(S2<0 || S2>100)
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S2>=0 && S2<=49)
    {
        printf("Grade F \n\n");
    }
        else if(S2>=50 && S2<=59)
    {
        printf("Grade D \n\n");
    }
        else if(S2>=60 && S2<=67)
    {
        printf("Grade C \n\n");
    }
        else if(S2>=68 && S2<=75)
    {
        printf("Grade -B \n\n");
    }
    else if(S2>=76 && S2<=83)
    {
        printf("Grade B \n\n");
    }
    else if(S2>=84 && S2<=91)
    {
        printf("Grade -A \n\n");
    }
    else if(S2>=92 && S2<=100)
    {
        printf("Grade A \n\n");
    }

    int S3;
    printf("Enter marks obtained in Introduction to Human Computer Interaction: ");
    scanf("%d",&S3);
    if(S3<0 || S3>100)
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S3>=0 && S3<=49)
    {
        printf("Grade F \n\n");
    }
        else if(S3>=50 && S3<=59)
    {
        printf("Grade D \n\n");
    }
        else if(S3>=60 && S3<=67)
    {
        printf("Grade C \n\n");
    }
        else if(S3>=68 && S3<=75)
    {
        printf("Grade -B \n\n");
    }
    else if(S3>=76 && S3<=83)
    {
        printf("Grade B \n\n");
    }
    else if(S3>=84 && S3<=91)
    {
        printf("Grade -A \n\n");
    }
    else if(S3>=92 && S3<=100)
    {
        printf("Grade A \n\n");
    }


    int S4;
    printf("Enter marks obtained in Mathematics in the Modern World: ");
    scanf("%d",&S4);
    if(S4<0 || S4>100)
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S4>=0 && S4<=49)
    {
        printf("Grade F \n\n");
    }
        else if(S4>=50 && S4<=59)
    {
        printf("Grade D \n\n");
    }
        else if(S4>=60 && S4<=67)
    {
        printf("Grade C \n\n");
    }
        else if(S4>=68 && S4<=75)
    {
        printf("Grade -B \n\n");
    }
    else if(S4>=76 && S4<=83)
    {
        printf("Grade B \n\n");
    }
    else if(S4>=84 && S4<=91)
    {
        printf("Grade -A \n\n");
    }
    else if(S4>=92 && S4<=100)
    {
        printf("Grade A \n\n");
    }


    int S5;
    printf("Enter marks obtained in Fitness Exercises: ");
    scanf("%d",&S5);
    if(S5<0 || S5>100)
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S5>=0 && S5<=49)
    {
        printf("Grade F \n\n");
    }
        else if(S5>=50 && S5<=59)
    {
        printf("Grade D \n\n");
    }
        else if(S5>=60 && S5<=67)
    {
        printf("Grade C \n\n");
    }
        else if(S5>=68 && S5<=75)
    {
        printf("Grade -B \n\n");
    }
    else if(S5>=76 && S5<=83)
    {
        printf("Grade B \n\n");
    }
    else if(S5>=84 && S5<=91)
    {
        printf("Grade -A \n\n");
    }
    else if(S5>=92 && S5<=100)
    {
        printf("Grade A \n\n");
    }

    int S6;
    printf("Enter marks obtained in Civic Welfare Training Service: ");
    scanf("%d",&S6);
    if(S6<0 || S6>100)
    {
        printf("Invalid input. Try Again \n\n");
    }
        else if(S6>=0 && S6<=49)
    {
        printf("Grade F \n\n");
    }
        else if(S6>=50 && S6<=59)
    {
        printf("Grade D \n\n");
    }
        else if(S6>=60 && S6<=67)
    {
        printf("Grade C \n\n");
    }
        else if(S6>=68 && S6<=75)
    {
        printf("Grade -B \n\n");
    }
    else if(S6>=76 && S6<=83)
    {
        printf("Grade B \n\n");
    }
    else if(S6>=84 && S6<=91)
    {
        printf("Grade -A \n\n");
    }
    else if(S6>=92 && S6<=100)
    {
        printf("Grade A \n\n");
    }

}
