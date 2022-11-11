#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function.h"
int main()
{
user new;

user u1={'eya','saffar','144',1,'bbb',2,2,18,06,2001,2,0};
user u2={'bochra','saffar','255',2,'ccc',2,3,05,11,1998,1,0},u3;
user u4={'ranime','saffar','366',1,'ddd',1,1,22,02,2004,3,0};
int x;
char cin[15],



x=add_user("fileUsers.txt",u1);
if(x==0)
        printf("\n add user with succees!");
else if (x==1)
        printf("\n user exist")

else printf("\nerror add");

 u2=search_user("fileUsers.txt",'10');
    if(strcmp(u2.cin,'-1'))
    {
        printf("does not exist");
    }
    else 
     {
         printf("existe!\n");
    }


 x=modify_user(cin[15], u2,"fileUser.txt");
    if(x==1)
        printf("\nModification of user with succes");
    else printf("\nerror of Modification");

 x=delete_user( cin[15],"fileUser.txt");
    if(x==1)
        printf("\ndeleting of user done with succes");
    else printf("\nerror of deleting");
     u3=search_user("fileUser",1);
    if(strcmp(u3.cin,'-1'))
        printf("invalid");
    return 0;

}

#endif 
