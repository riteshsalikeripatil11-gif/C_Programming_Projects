//Guessing game
//----------------------*******************-------------------------
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
    int random,guess,no_of_guess=0;
    printf("welcome to guessing game\n");
    srand(time(0));      //it is used to generate random number every time we run the program 
                         //otherwise it will generate same number every time we run the program
    random=rand() % 100+1;  //to generate random number between 1 to 100 
                           // it is used to generate random number between 0 to 99 so we add 1 to make it between 1 to 100
    // printf("random number is %d\n",random);
    do{
        printf("enter a number between 1 to 100: ");
        scanf("%d",&guess);
        no_of_guess++;

    if(guess>random){
        printf("enter smaller number\n");
    }
    else if(guess<random){
        printf("enter larger number\n");
    }
    else{
        printf("you have guessed the number in %d attempts\n",no_of_guess);
    }

    }while(random!=guess);

    return 0;
}
//--------------------------**********************-----------------------