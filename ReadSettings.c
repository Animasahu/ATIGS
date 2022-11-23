#include<stdio.h>
#include<stdlib.h>

#define MAX_LINES 100
#define MAX_LEN 1000

extern char* out_file_path;


void ReadSettingsFile() {
    char data[MAX_LINES][MAX_LEN];
    FILE* file = fopen("Settings.config", "r");
  if (file == NULL) {
    printf("\nError opening file.\n");
    exit(0);
  }

  int line = 0;
  while (!feof(file) && !ferror(file)) {
    if (fgets(data[line], MAX_LEN, file) != NULL) {
      line++;
    }
  }
  fclose(file);
  for (int i = 0; i < line; i++) {
    if (i == 0) {
      out_file_path = data[i];
    } else {
      printf("Error In Input File Format");
      exit(0);
    }
  }  
}