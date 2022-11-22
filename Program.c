#include<stdio.h>
#include<stdlib.h>

char* in_file_path;
char* Test_Parameter_Name;
char* Test_Parameter_Type;
char* Test_Parameter_String;
int Test_Parameter_Int;
char* out_file_path;
void ReadInputFile();
void DispError(int ErrorCode)
{
    switch(ErrorCode)
    {
        case 0:
            printf("Please enter the arguments Properly");
            break;
        
        case 1:
            printf("Only non-negative and non-zero INTEGER Arguments are accepted for number of OUTPUT Files");
            break;

        case 2:
            printf("Input Filepath is missing or doesn't exist");
            break;
    }
}


int main(int argcount, char* args[])
{
        if(argcount != 3)
        {
        DispError(0);
        exit(0);
        }

        int n_out = atoi(args[1]);
        
        if(n_out <= 0)
        {
            DispError(1);
            exit(0);
        }

        FILE* in_file; 
        in_file = fopen(args[2], "r");

        if(in_file == NULL)
        {
            DispError(2);
            exit(0);
        }

        in_file_path = args[2];
        ReadInputFile();
}
