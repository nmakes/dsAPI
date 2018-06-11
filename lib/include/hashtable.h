// Written By Naveen Venkat
// nav.naveenvenkat@gmail.com

#ifndef __HASHTABLE_H_API
#define __HASHTABLE_H_API

#include <stdio.h>
#include <stdlib.h>

#define _SET_SIZE_TYPE long long int

struct _HASHTABLE
{
    _SET_SIZE_TYPE size;
    void * elems;
};

typedef struct _HASHTABLE * hashtable;


#endif
