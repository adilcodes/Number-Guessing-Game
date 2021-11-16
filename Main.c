#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, allguesses = 1;
    srand(time(0));
    number = rand()%100 + 1; // Will Generate a random number between 1 and 100...
    // printf("The Random Number is %d \n", number);

    // Starting a loop which keeps on running until the numberis guessed
    printf("You have only 20 attempts. \n");
    printf("Guess the Number between 1 to 100: \n");
    do
    {
            if (allguesses<21)
            {
            scanf("%d", &guess);
                if (guess>number)
                    {
                        printf("You entered the higher number. Lower Number please: \n");
                    }
                    else if(guess<number){
                        printf("You entered the lower number. Higher Number please: \n");
                    }
                    else{
                        printf("Exactly!!! You won \n");
                        printf("You guessed it in %d attempts \n", allguesses);
                    }
            }
            else{
                printf("Game Over!");
            }
        allguesses++;
    } while (guess!=number && allguesses<22);
    return 0;
}
