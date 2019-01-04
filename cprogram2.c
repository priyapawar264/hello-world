
// C program to illustrate
// command line arguments
#include <stdio.h>

int main(int argc,char* argv[])
{
    int counter;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name\n");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----\n");
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s\n",counter,argv[counter]);
    }
    int max;
    if(argv[1]>argv[2])
    {
        printf("Greater number is: %d", argv[1])
    }
    else
    {
        printf("Greater number is: %d", argv[2])
    }
    return 0;
}
