#include <stdio.h>
#include <stdlib.h>

//creates conditions to where

int auth(int acc[3][2], int id, int pin){
    int cred = 0;
        for(int i=0; i<3; i++){
            if(id == acc [i][0] && pin == acc[i][1]){
                cred = 1;
            }
        }
        return cred;
    }
    int main(){
        int acc[3][2] = {{57,123},{481,123},{45,123}};
            int id,pin;
            printf("Enter ID Number:  ");
            scanf("%d", &id);
            printf("Enter PIN:  ");
            scanf("%d", &pin);
                if(auth(acc,id,pin)){
                        printf("\n\nYou have successfully logged in\nID# = %d \n", id);

                }
                else {
                    printf("Invalid ID/PIN!");
                }
            return 0;
}


