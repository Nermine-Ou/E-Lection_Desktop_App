#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"file.h"
int main()
{electoral new;

electoral s1={"122",1,2,1,2022,1,"105",5,"106","107","108",1};
electoral s2={"123",3,2,12,2022,2,"103",3,"102","104","100",1};
electoral s3={"201",4,1,10,2022,3,"104",3,"13","14","15",1};
int x;

printf("add a new electoral list ");

x=addelect("fileelect.txt",s1);
if(x==1)
        printf("\n electoral list added with succees!");
    else printf("\nerror");

 s2=searchekect("fileelect.txt","122");
    if(s2.ID==-1)
    {
        printf("does not exist");
    }
    else if (s2.id!=-1)
     {
         printf("existe!\n");
    }


 x=modifyelect("110", s2,"fileelect.txt");
    if(x==1)
        printf("\nModification of electoral list with succes");
    else printf("\nerror of Modification");
 x=deletelect("122","fileelect.txt");
    if(x==1)
        printf("\ndeleting of electoral list done with succes");
    else printf("\nerror with deleting");
     s3=searchelect("fileelect",1);
    if(s3.id==-1)
        printf("invalid");
    return 0;

}

#endif // FONCTION_H_INCLUDED

}

