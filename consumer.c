#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   char ch,buff[8];
   int y;
   FILE *fp;
   FILE *fr;
   fp = fopen("C:\\Users\\RAJ SHAH\\Desktop\\test\\testOut.txt", "rb"); 
   fr= fopen("consumerTest.txt","w");
   if (fp == NULL && fr!= NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   
    while(fread(buff, sizeof(char), sizeof(buff), fp)){
        //printf("%s\n",buff);
         // Using atoi()
        char k=0;    
        for (int i = 0; i < 8; ++i)
        {
            k |= (buff[i] & 1) << (7 - i);
        } 
        putc(k,fr);  
    }
   
   fclose(fp);
   fclose(fr);
   return 0;
}