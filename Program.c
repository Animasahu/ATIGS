#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<stdbool.h>

char * in_file_path;
char * Test_Parameter_Name;
char * Test_Parameter_Type;
char * Test_Parameter_String;
int Test_Parameter_Int;
int n_out;
float Test_Parameter_Float;
bool Test_Parameter_Boolean;
char * out_file_path;
void ReadInputFile();
int CheckFileForValidity();
void CompareInt();
void CompareFloat();
void PrintString();
void PrintBool();

void DispError(int ErrorCode) {
  switch (ErrorCode) {
  case 0:
    printf("\nPlease enter the arguments Properly");
    break;

  case 1:
    printf("\nOnly non-negative and non-zero INTEGER Arguments are accepted for number of OUTPUT Files");
    break;

  case 2:
    printf("\nInput Filepath is missing or doesn't exist");
    break;
  case 3:
    printf("\nError in File Format");
    break;
  }
}

int main(int argcount, char * args[]) {
  if (argcount != 3) {
    DispError(0);
    exit(0);
  }

  n_out = atoi(args[1]);

  if (n_out <= 0) {
    DispError(1);
    exit(0);
  }

  FILE * in_file;
  in_file = fopen(args[2], "r");

  if (in_file == NULL) {
    DispError(2);
    exit(0);
  }

  in_file_path = args[2];
  ReadInputFile();
  if (CheckFileForValidity() == 1) {
    DispError(3);
    exit(0);
  }
  if (CheckFileForValidity() == 0) {
    char* dummy;

  dummy = "string";
  if (strstr(Test_Parameter_Type, dummy) != NULL) {
    Test_Parameter_String = Test_Parameter_String;
    
  }

  dummy = "int";
  if (strstr(Test_Parameter_Type, dummy) != NULL) {
    Test_Parameter_Int = atoi(Test_Parameter_String);
    
  }

  dummy = "bool";
  if (strstr(Test_Parameter_Type, dummy) != NULL) {
    {
      dummy = "true";
      if (strstr(Test_Parameter_String, dummy) != NULL)
      {
        Test_Parameter_Boolean = true;
        
      }
      dummy = "false";
      if (strstr(Test_Parameter_String, dummy) != NULL)
      {
        Test_Parameter_Boolean = false;
        
      }
      
    }
    
  }

  dummy = "float";
  if (strstr(Test_Parameter_Type, dummy) != NULL) {
    Test_Parameter_Float = atof(Test_Parameter_String);
    
    dummy = NULL;
  }
  }

  return 0;
}