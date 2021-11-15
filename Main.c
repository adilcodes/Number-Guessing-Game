#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1; // Will Generate a random number between 1 and 100...
    printf("The Random Number is %d", number);
    return 0;
}
