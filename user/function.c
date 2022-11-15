#include<stdlib.h>
#include"function.h"
#include<stdio.h>
#include<string.h>

int add_user( char * filename , user new )
{       
    FILE * f=fopen(filename,"a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %d %s %d %d %d %d %d %d %d\n",new.FirstName, new.last_name, new.cin, new.social_statue, new.password, new.minicipality, new.role, new.day_dob, new.month_dof, new.year_dob, new.sex, new.disabled);
        fclose(f);
printf("done succesfullu\n");
        return 1;
    }
    else 
      return 0;
}


int modify_user(char cin[15] , user new, char *filename)
{
printf( "first in the function %s \n",new.FirstName);
user p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
      {return 0;}
else
    {
while(fscanf(f,"%s %s %s %d %s %d %d %d %d %d %d %d\n",p.FirstName,p.last_name,p.cin,&p.social_statue,p.password,&p.minicipality,&p.role,&p.day_dob,&p.month_dof,&p.year_dob,&p.sex,&p.disabled)!=EOF)
{
if(strcmp(p.cin,cin)!=0)
 { fprintf(f2,"%s %s %s %d %s %d %d %d %d %d %d %d\n",p.FirstName, p.last_name, p.cin, p.social_statue, p.password, p.minicipality, p.role, p.day_dob, p.month_dof, p.year_dob, p.sex, p.disabled);
printf(" cin different \n");
}
else
{
  fprintf(f2,"%s %s %s %d %s %d %d %d %d %d %d %d\n",new.FirstName, new.last_name, new.cin,  new.social_statue, new.password,  new.minicipality,  new.role,  new.day_dob, new.month_dof,  new.year_dob,  new.sex,new.disabled);
}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int delete_user(char cin[15], char * filename)
{ int tr;
user p;
tr=0;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %d %s %d %d %d %d %d %d %d\n",p.FirstName,p.last_name,p.cin,&p.social_statue,p.password,&p.minicipality,&p.role,&p.day_dob,&p.month_dof,&p.year_dob,&p.sex,&p.disabled)!=EOF)
{
if(strcmp(p.cin,cin)==0)
       tr=1;
else

fprintf(f2,"%s %s %s %d %s %d %d %d %d %d %d %d\n",p.FirstName,p.last_name,p.cin,p.social_statue,p.password,p.minicipality,p.role,p.day_dob,p.month_dof,p.year_dob,p.sex,p.disabled);
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return tr;
    }
}

user search_user( char *filename,char cin[15])
{
user p; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(tr==0 && fscanf(f,"%s %s %s %d %s %d %d %d %d %d %d %d\n",p.FirstName,p.last_name,p.cin,&p.social_statue,p.password,&p.minicipality,&p.role,&p.day_dob,&p.month_dof,&p.year_dob,&p.sex,&p.disabled)!=EOF )
{

	if(strcmp(cin,p.cin)==0)
 		{ tr=1; ;}
}
}
if(tr==0)
	strcpy(p.cin,"-1");
return p;

}

