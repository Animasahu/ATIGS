#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern char* out_file_path;
extern char* Parameter_Name;
extern char* Test_Parameter_String;
extern char* Test_Parameter_Name;
extern char* input_file_path;

int flag;


void CreateFile() {
    FILE *fp;
    fp  = fopen (out_file_path, "w");
    fclose(fp);
}

void WriteFile() {
    FILE* file;
    file = fopen(out_file_path, "w");
 
     fprintf(file, "%s", Test_Parameter_String);

    fclose(file);
}

void PrintFile() {
    
    CreateFile();
    WriteFile();
    
}