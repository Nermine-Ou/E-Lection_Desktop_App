#include<stdio.h>
#include<stdlib.h>
#if
//Polling Station Management
typedef struct 
{
char IDstat[10];
char IDag[10];
int mun;
int cap;
int oph;
int opm;
int clh;
int clm;
int newstat;
int oldstat;
int yes;
}poll_stat;
int addpollingstation( char * filename , poll_stat p );
int modifypollingstation(int id, poll_stat new, char * filename);
int deletepollingstation(int id, char * filename);
int searchpollingstation( char * filename,int id);


#endif // FUNCTION_H_INCLUDED








