/* Filename: while_loop.c */
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
void main(int argc, char *argv[]) {
   int start_value = 1;
   int end_value;
   if (argc == 1)
   end_value = 10;
   else
   end_value = atoi(argv[1]);
   printf("Argv[1] is %s\n", argv[1]);
   while (start_value <= end_value) {
      printf("%d\t", start_value);
      start_value++;
   }
   printf("\n");
   return;
}
