#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//election management
struct add_election{
char ID_addelec;
int day_addelec;
int month_addelec;
int year_addelec;
int NPs_addelec;
int NH_addelec;
int OH_addelec;
int CH_addelec;
int save_addelec;
};
typedef struct add_election addelec;

int add_election( char * filename , election p );
int modify_election(int id, election new, char * filename);
int delete_election(int id, char * filename);
election search_election( char * filename,int id);


#endif // PROJECT_H_INCLUDED
