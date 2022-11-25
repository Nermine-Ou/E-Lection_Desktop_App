#include <stdio.h>
#include <stdlib.h>
typedef struct{
char FirstName[15];
char last_name[15];
char  cin[15];
int  social_statue;
char password[20];
int  minicipality ; //municipality
int role ;
int day_dob;
int month_dof;
int year_dob;
int sex ;
int disabled;
int pol_sta;
} user ;

typedef struct{
char cin[15] ;
int IdList;
char password ;
} vote ;

int add_user( char * filename , user u );
int modify_user(char cin[15], user new, char * filename);
int delete_user(char cin[15], char * filename);
user search_user( char * filename,char cin[15]);
float agemoyen2(char * fileUsers, int R ) ;
void TPHF( char *fileUsers, float *f, float  *h);
int add_vote( char * filename , vote new );
