#include<stdlib.h>
#include"function.h"
#include<stdio.h>

int addpollingstation( char * filename ,poll_stat new)
{   int x=0;
    poll_stat p;
    FILE * f=fopen(filename, "a");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
     {return 0;}
     else
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes);!=EOF)
{
if(p.id!=id)
        {fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes);}
else
    {
        fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes);
        x=1;
    }
}
if(x==0)
{
  fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",new.IDstat,new.IDag,new.mun,new.cap,new.oph ,new.opm,new.clh,new.clm,new.newstat,new.oldstat,new.yes);
}
fclose(f);
fclose(f2);

int modifypollingstation(int id, poll_stat new, char * filename)
{
poll_stat p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
     return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes);
else

  fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",new.IDstat,new.IDag,new.mun,new.cap,new.oph ,new.opm,new.clh,new.clm,new.newstat,new.oldstat,new.yes);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int deletepollingstation(int id, char * filename)
{ int tr;
poll_stat p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes);
else

tr=-1;
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

int searchpollingstation( char * filename,int id)
{
poll_statstation p; int tr=0;
    FILE * f=fopen(filename , "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %d %d %d %d %d %d %d %d %d \n",p.IDstat,p.IDag,p.mun,p.cap,p.oph ,p.opm,p.clh,p.clm,p.newstat,p.oldstat,p.yes)!=EOF && tr==0)
{if(id==p.id)
tr=1;
}
}
if(tr==0)
p.id=-1;
return p;

}

