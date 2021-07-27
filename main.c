
/***********************************
version: C99                       *
project: Library management system *
Author : Kevin Adaka               *
Date   : June,2021                 *
License: MIT                       *
***********************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main ()
{

// function prototype
    int action;
    printf(" \tcounty library management system\n");
    printf("welcome Kevin\n");

    action = menu();
    execute_action(action);

    return 0;

}

void execute_action(int action){
    switch(action)
    case 1:
        printf("Adding a user\n");
        break;

    case 2:
        printf("Adding a book\n");
        break;

    case 3:
        printf("Exiting\n");
        break;
    default:
        printf("Unknown action. \n")

}
void close(){
    printf("thank you for using the system\n");
    printf("bye\n");
    sleep(5000);
    exit(0);
}
int menu() {
    //navigate menu
    int action;
    do{
       printf("1. Add user\n");
       printf("2. Add book\n");
       printf("3. Exit\n");
       printf("select option(1-3): ");
       scanf("%d",&action);
    //validate input
    if (action < 1 || action > 3) {
        printf ("invalid action .try again\n");
        Sleep(2000);
        system( "cls");
    }

}while (action < 1 ||action > 3);

    execute_action(action);

    return 0;
}




