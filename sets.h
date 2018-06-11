#ifndef __SETS_H_API
#define __SETS_H_API

#include <stdio.h>
#include <stdlib.h>

#define _SET_ELEM_TYPE int
#define _SET_SIZE_TYPE long long int

struct _SET
{
    _SET_SIZE_TYPE size;
    int multi;
    _SET_ELEM_TYPE * elems;
};

typedef struct _SET * set;

set setMake(_SET_SIZE_TYPE size, int multi);
set setFree(set s);
int setExists(set s, _SET_SIZE_TYPE elem);
int setAdd(set s, _SET_SIZE_TYPE elem);
int setDel(set s, _SET_SIZE_TYPE elem);
set setRemake(set s, _SET_SIZE_TYPE size, int multi);
int setPrint(set s);

#endif
