
// C program to illustrate
// command line arguments
#include <stdio.h>

int main(int argc,char* argv[])
{
    int counter;
    int sum;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name\n");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++)
            printf("\natoi(argv[counter]): %s",argv[counter]);
            sum = sum + atoi(argv[counter]);
    }
    printf("The sum is: %d", sum);
    return 0;
}
