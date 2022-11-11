#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

typedef struct  {
char ID[10];
int muncipality;
int day;
int month;
int year;
int orientation;
char IDH[10];
int pollingstation;
char IDC1,IDC2,IDC3[10];
int submit[10];
}electoral;


int addelect( char * filename , electoral e );
int modifyelect(int ID, electoral new, char * filename);
int deleteelect(int ID, char * filename);
electoral searchelect( char * filename,int id);


#endif // FUNCTION_H_INCLUDED

