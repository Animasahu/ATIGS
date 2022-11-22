#include<stdio.h>
#include<stdlib.h>
#define MAX_LINES 100
#define MAX_LEN 1000

extern char* in_file_path;
extern char* Test_Parameter_Name;
extern char* Test_Parameter_Type;
extern char* Test_Parameter_String;
extern int Test_Parameter_Int;
void ReadInputFile()
{
 char data[MAX_LINES][MAX_LEN];
 FILE *file;
 file = fopen(in_file_path, "r");
 if (file == NULL)
  {
    printf("Error opening file.\n");
    exit(0);
  }
  int line = 0;
  while (!feof(file) && !ferror(file))
  {
    if (fgets(data[line], MAX_LEN, file) != NULL)
    {
      line++;
    }
  }  
  fclose(file);  
  for (int i = 0; i < line; i++)
  {
    printf("%s", data[i]);
  }
}
