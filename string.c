#include <stdio.h>
int main()
 {
   char str[200];
   int vowel,consonent,space,i;
   vowel=consonent=space=0;
   
   printf("enter the string\n");
   gets(str);
   
   for(i=0;str[i]!='\0';i++)
    {
	  if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
	  || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	    {
		   vowel++;
		 }  
	 
	  
	  else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
	   {
	     consonent++;
		} 
	  
	  else if(str[i]==' ')
	   {
	     space++;
		}
	}
	printf("vowels %d\n",vowel);
	printf("consonent %d\n",consonent);
	printf("spsces %d\n",space);
 }	