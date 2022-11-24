#include<stdio.h>

#include<stdlib.h>

#define MAX_LINES 100
#define MAX_LEN 1000

extern char * in_file_path;
extern char * Test_Parameter_Name;
extern char* Parameter_Name;
extern char * Test_Parameter_Type;
extern char * Test_Parameter_String;

void ReadInputFile() {
  char data[MAX_LINES][MAX_LEN];
  FILE * file;
  file = fopen(in_file_path, "r");
  if (file == NULL) {
    printf("\nError opening file.\n");
    exit(0);
  }
  int line = 0;

  int line_counter = 0;

  while (!feof(file) && !ferror(file)) {
    if (fgets(data[line], MAX_LEN, file) != NULL) {
      line++;
    }
  }
  fclose(file);
  for (int i = 0; i < line; i++) {
    if(data[i][0] != '#') {
    if (line_counter == 0) {
      Test_Parameter_Name = data[i];
    } else if (line_counter == 1) {
      Test_Parameter_Type = data[i];
    } else if (line_counter == 2) {
      Test_Parameter_String = data[i];
    } /*else {
      printf("Error In Input File Format");
      exit(0);
    }*/
    line_counter++;
    }
  }
  }