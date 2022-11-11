#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include"function.h"
int main()
{
pollingstation new;

election s1={123,8,4,200,1,12,1};
election s2={102,9,3,190,0,1,1},s3;
election s4={201,5,3,919,1,5,1};
int x;

printf("add a new election  ");

x=addelection("fileelection.txt",s1);
if(x==1)
        printf("\n election added!!!!!!!!!");
    else
        printf("\n error add");

 s2=searchpollingstation("fileelection.txt",10);
    if(s2.id==-1)
    {
        printf("does not exist");
    }
    else if (s2.id!=-1)
     {
         printf("existe!!!\n");
    }


 x=modifyelection(102, s2,"fileelectio.txt");
    if(x==1)
        printf("\n election modified");
    else printf("\n error of Modification");
 x=deleteelection(201,"fileelection.txt");
    if(x==1)
        printf("\n election deleted");
    else printf("\n error of deleting");
     s3=searchelection("fileelection",1);
    if(s3.id==-1)
        printf("invalid");
    return 0;

}

#endif // FONCTION_H_INCLUDED
