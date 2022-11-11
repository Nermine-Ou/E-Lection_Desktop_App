
#include<stdio.h>
#include<stdlib.h>
#include"functionlist.h"
int main()
{


electoral s1={"122",1,2,1,2022,1,"105",5,"106","107","108",1};
electoral s2={"123",3,2,12,2022,2,"103",3,"102","104","100",1};
electoral s3={"201",4,1,10,2022,3,"104",3,"13","14","15",1};
int x;

printf("add a new electoral list ");

x=addelect("fileelect.txt",s1);
if(x==1)
        printf("\n electoral list added with succees!");
    else printf("\nerror");

 s2=searchelect("fileelect.txt","122");
    if(x==1)
    {
        printf("does not exist");
    }
    else 
     {
         printf("existe!\n");
     }


 x=modifyelect("110", s2,"fileelect.txt");
    if(x==1)
        printf("\nModification of electoral list with succes");
    else printf("\nerror of Modification");
 x=deleteelect("122","fileelect.txt");
    if(x==1)
        printf("\ndeleting of electoral list done with succes");
    else printf("\nerror with deleting");
     s3=searchelect("fileelect",1);
    if(x==1)
    {
        printf("does not exist");
    }
    else 
     {
         printf("existe!\n");
    }

    return 0;

}





