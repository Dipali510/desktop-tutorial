#include<stdio.h>
int main()
{
   char dna[]="ACGTTTTC"; 
   int count =0;
   int len=strlen(dna);
   for(int i=0;i<len;i++)
   {
       if(dna[i]=='C'||dna[i]=='G')
           count++;
   }
    printf("Count of C and G in the DNA sequence is %d",count);
    return 0;
    
}

