#include<stdio.h>
#include<stdlib.h>

//Polling Station Management
struct poll_stat
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
};
int addpollingstation( char * filename , pollingstation p );
int modifypollingstation(int id, pollingstation new, char * filename);
int deletepollingstation(int id, char * filename);
int searchpollingstation( char * filename,int id);


#endif // FUNCTION_H_INCLUDED








