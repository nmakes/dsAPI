// Written By Naveen Venkat
// nav.naveenvenkat@gmail.com

#include "../include/hashtable.h"

// // ---
//
// #define _HASHTABLE_SIZE_TYPE long long int
//
// struct _HASHTABLE
// {
//     _HASHTABLE_SIZE_TYPE size;
//     int multi;
//     void * elems;
// };
//
// typedef struct _HASHTABLE * hashtable;
//
// // ---

hashtable hashtableMake(_HASHTABLE_SIZE_TYPE size, int multi);
hashtable hashtableFree(hashtable s);

// int setExists(set s, _HASHTABLE_SIZE_TYPE elem);
// int setAdd(set s, _HASHTABLE_SIZE_TYPE elem);
// int setDel(set s, _HASHTABLE_SIZE_TYPE elem);
// set setRemake(set s, _HASHTABLE_SIZE_TYPE size, int multi);
// int setPrint(set s);
