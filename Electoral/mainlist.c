
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"functionlist.h"

int main()
{


electoral s1={"122",1,2,1,2022,1,"105",5,"106","107","108"};
electoral s2={"123",3,2,12,2022,2,"103",3,"102","104","100"};
electoral s3={"201",4,1,10,2022,3,"104",3,"13","14","15"};
int x;
electoral s4;
printf("add a new electoral list\n");

x=addelect("fileelect.txt",s1);
if(x==1)
      printf("electoral list added with succees!\n");
 else 
      printf("error\n");

 s4=searchelect("fileelect.txt","122");
    if(strcmp(s4.ID,"N")==0)
    {
        printf("does not exist\n");
    }
    else 
     {
         printf("existe!\n");
     }


 x=modifyelect("fileelect.txt","122",s3);
    if(x==1)
        printf("Modification of electoral list with succes\n");
    else 
        printf("error of Modification\n");
 x=deleteelect("201","fileelect.txt");
    if(x==1)
        printf("deleting of electoral list done with succes\n");
    else printf("error with deleting\n");
    

    return 0;

}





