#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"function.h"
int main()
{
poll_stat new;

pollingstation s1={'123','8',4,200,1,12,1};
pollingstation s2={'102','9',3,190,0,1,1};
pollingstation s3={'201','5',3,919,1,5,1};
int x;

printf("add a new pollingstation ");
x=addpollingstation("filepollingstation.txt",s1);
if(x==1)
        printf("\n add polingstation with succees!!!!!!!!!");
    else printf("\nerror add");

 s2=searchpollingstation("filepollingstation.txt",10);
    if(s2.id==-1)
    {
        printf("does not exist");
    }
    else if (s2.id!=-1)
     {
         printf("existe!!!\n");
    }


 x=modifypollingstation(102, s2,"filepollingstation.txt");
    if(x==1)
        printf("\nModification of pollingstation with succes");
    else printf("\nerror of Modification");
 x=deletepollingstation(201,"fileelection.txt");
    if(x==1)
        printf("\ndeleting of pollingstaion done with succes");
    else printf("\nerror of deleting");
     s3=searchpollingstation("filepollingstation",1);
    if(s3.id==-1)
        printf("invalid");
    return 0;

}

#endif // FONCTION_H_INCLUDED

