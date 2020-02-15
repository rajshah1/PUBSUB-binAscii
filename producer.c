#include <stdio.h>
#include <stdlib.h>
void printbincharpad(char c)
{
    for (int i = 7; i >= 0; --i)
    {    
        putchar( (c & (1 << i)) ? '1' : '0' );
    }
    
}

int main()
{
   char ch, file_name[25];
   FILE *fp;
   fp = fopen("C:\\Users\\RAJ SHAH\\Desktop\\test\\producerTest.txt", "r"); 
   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   while((ch = fgetc(fp)) != EOF){
        //printf("%c", ch);
        printbincharpad(ch);
   }
   fclose(fp);
   return 0;
}