#include<stdlib.h>
#include"functionlist.h"
#include<stdio.h>

int addelect( char * filename,electoral e)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3,e.submit);
        fclose(f);
        return 1;
    }
    else
        return 0;
}

int modifyelect(char ID[10], electoral new, char * filename)
{
    electoral e;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
    {
        return 0;
    }
    else
    {
        while(fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3,&e.submit)!=EOF)
        {
            if(strcmp(e.ID,ID)==0)
                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3,e.submit);
            else

                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s %d\n",new.ID,new.muncipality,new.day,new.month,new.year,new.orientation,new.IDH,new.pollingstation,new.IDC1,new.IDC2,new.IDC3,new.submit);

        }
        fclose(f);
        fclose(f2);
        remove(filename);
        rename("aux.txt", filename);
        return 1;
    }

}

int deleteelect(char id[10], char * filename)
{
    electoral e;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
        return 0;
    else
    {
        while(fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3,&e.submit)!=EOF)
        {
            if(strcmp(e.ID,id)==0)
                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3,e.submit);
            else

                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3,e.submit);
        }
        fclose(f);
        fclose(f2);
        remove(filename);
        rename("aux.txt", filename);
        return 1;
    }
}

electoral searchelect( char * filename,char ID[10])
{
    electoral e;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL )
    {
        while(fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s %d\n",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3,&e.submit)!=EOF && tr==0)
        {
           if(strcmp(ID,e.ID)==0)
                tr=1;
        }
    }
    if(tr==0)
        e.ID[0]=-1;
    return e;

}

