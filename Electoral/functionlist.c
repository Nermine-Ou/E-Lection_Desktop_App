#include<stdlib.h>
#include"functionlist.h"
#include<stdio.h>
#include<string.h>

int addelect( char * filename,electoral e)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %d %d %s %d %s %s %s \n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3);
        fclose(f);
        return 1;
    }
    else
        return 0;
}

int modifyelect(char * filename,char ID[10], electoral enew )
{
    electoral e;
    int tr=0;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
  
  
        while(fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3)!=EOF)
        {


            if(strcmp(e.ID,ID)==0)
               { 

fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s\n",enew.ID,enew.muncipality,enew.day,enew.month,enew.year,enew.orientation,enew.IDH,enew.pollingstation,enew.IDC1,enew.IDC2,enew.IDC3);

               
		tr=1;}
            else
                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s\n",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3);
                

        }
  
    }
    fclose(f);
        fclose(f2);
        remove(filename);
        rename("aux.txt", filename);
        return tr;
}

int deleteelect(char id[10], char * filename)
{
    electoral e;int tr=0;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f!=NULL && f2!=NULL)
        
    {
        while(fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3)!=EOF)
        {
            if(strcmp(e.ID,id)==0)
                tr=1;
            else

                fprintf(f2,"%s %d %d %d %d %d %s %d %s %s %s",e.ID,e.muncipality,e.day,e.month,e.year,e.orientation,e.IDH,e.pollingstation,e.IDC1,e.IDC2,e.IDC3);
        }
      
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("aux.txt", filename);
    return tr;
}

electoral searchelect( char * filename,char ID[10])
{
    electoral e;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL )
    {
        while(tr==0 && fscanf(f,"%s %d %d %d %d %d %s %d %s %s %s ",e.ID,&e.muncipality,&e.day,&e.month,&e.year,&e.orientation,e.IDH,&e.pollingstation,e.IDC1,e.IDC2,e.IDC3)!=EOF)  {
           if(strcmp(ID,e.ID)==0)
                tr=1;
        }
    }
    if(tr==0)
        strcpy(e.ID,"N");
    return e;

}

