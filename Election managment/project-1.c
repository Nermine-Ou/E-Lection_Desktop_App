#include<stdlib.h>
#include"function.h"
#include<stdio.h>

int add_election( char * filename ,election p)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %d %d %d \n",p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modify_election(int id, election new, char * filename)
{
election p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
{return 0;}
else
    {
while(fscanf(f,"%d %d %d %d %d %d",&p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %d %d %d %d %d %d %d\n",p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save);
else

  fprintf(f2,"%d %d %d %d %d %d %d %d\n",new.id_of_election,new.capacity_of_habitant,new.municipalities,new.save);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int delete_election(int id, char * filename)
{
election p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d %d",&p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %d %d %d %d %d %d\n",p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save);
else

fprintf(f2,"%d %d %d %d %d %d %d\n",p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save);
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

election search_election( char * filename,int id)
{
election p; int tr=0;
    FILE * f=fopen(filename , "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %d %d %d %d",&p.id_of_election,p.capacity_of_habitant,p.municipalities,p.save)!=EOF && tr==0)
{if(id==p.id)
tr=1;
}
}
if(tr==0)
p.id=-1;
return p;

}
