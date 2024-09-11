#include <stdio.h> //needed for stderr, stdin, and stdout
//User Input
main(){
    int myNum;
    printf("Type a number: \n");

    scanf("%d", &myNum);

    printf("Your number is: %d\n\n", myNum);

    char myChar;

    printf("Type a number AND a character and press enter: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n\n", myChar);

    //Take String Input
    char firstName[30];     //Must specify the size of the string for scanf().

    printf("Enter the first name: \n");
    scanf("%s", firstName);
    getchar();      //Ensures that fgets receives a newline character instead of an enter input. Apparently fgets has problems is a scanf comes before it. Need to research.
    printf("Hello %s\n\n", firstName);

    //Strings with more than one word.
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
}
