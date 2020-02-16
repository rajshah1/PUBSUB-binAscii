#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   FILE *fp;
   FILE *fr;
   fp = fopen("C:\\Users\\RAJ SHAH\\Desktop\\test\\producerTest.txt", "r"); 
   fr= fopen("testOut.txt","w");
   if (fp == NULL && fr !=NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   
   while((ch = fgetc(fp)) != EOF){

        for (int i = 7; i >= 0; --i)
        {    
            char b=(ch & (1 << i)) ? '1' : '0';
            //putchar(b);
            putc(b,fr);
        }
   }
   fclose(fp);
   fclose(fr);
   return 0;
}