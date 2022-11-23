#include<stdio.h>
#include<stdlib.h>
#include<string.h>


extern int n_out;
extern char* out_file_path;
extern char* Test_Parameter_String;
extern char* Test_Parameter_Name;
void PrintFile();


void CompareFloat() {
FILE *fp;
char* file_extension = ".txt";

    for(int i = 0 ; i < n_out ; i++)
    {
        strcat(out_file_path, file_extension);
        PrintFile();
    }
}