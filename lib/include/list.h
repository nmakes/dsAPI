// Written By Naveen Venkat
// nav.naveenvenkat@gmail.com

#ifndef __LIST_H_API
#define __LIST_H_API

#include <stdio.h>
#include <stdlib.h>

#define _LIST_SIZE_TYPE unsigned long int

struct _LISTELEM
{

};
typedef struct _LISTELEM * listelem;

struct _LIST
{
    _LIST_SIZE_TYPE length;
    listelem * head;
    listelem * tail;
};
typedef struct _LIST * list;

#endif
