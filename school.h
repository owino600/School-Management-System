#ifndef _SCHOOL_H_
#define _SCHOOL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void username(char *firstname, char *lastname);
void birthdate(char *day, char *month, char *year);
void genderchoice(char *gender);
int submitOrDelete(void);
#endif
