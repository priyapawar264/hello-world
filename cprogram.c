// C program to illustrate
// command line arguments
#include <stdio.h>

int main(int argc,char* argv[])
{
    int counter;
    int sum;
    printf("\nProgram Name Is: %s",argv[0]);
    if(argc>=1)
    {
        printf("\nNumber Of Arguments Passed are: %d",argc);
        for(counter=1;counter<argc;counter++)
            if(atoi(argv[counter]) != 10)
            {
                printf("\n***********Test execution success**********");
            }
            else
            {
                printf("\n***********Failure is occured**********");
            }
    }
    return 0;
}
