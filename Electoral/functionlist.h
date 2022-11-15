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
char IDC1[10],IDC2[10],IDC3[10];

}electoral;


int addelect( char * filename , electoral e );
int modifyelect(char * filename,char ID[10], electoral enew );
int deleteelect(char ID[10], char * filename);
electoral searchelect( char * filename,char ID[10]);


#endif // FUNCTION_H_INCLUDED

