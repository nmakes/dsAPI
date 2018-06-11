// Written By Naveen Venkat
// nav.naveenvenkat@gmail.com

#include "../include/sets.h"

set setMake(_SET_SIZE_TYPE size, int multi)
{
    set s = (set) malloc(sizeof(struct _SET));
    s->size = size;
    s->multi = multi;
    s->count = 0;
    s->elems = (_SET_ELEM_TYPE*) malloc(sizeof(_SET_ELEM_TYPE)*size);
    return s;
}

set setFree(set s)
{
    if(s==NULL)
    {
        return NULL;
    }
    else
    {
        if(s->elems!=NULL)
        {
            free(s->elems);
            s->elems = NULL;
        }
        free(s);
        return NULL;
    }
}

int setExists(set s, _SET_SIZE_TYPE elem)
{
    if(s==NULL)
    {
        return -2;
    }
    else
    {
        if(s->elems==NULL)
        {
            return -1;
        }
        else
        {
            return s->elems[elem];
        }
    }
}

int setAdd(set s, _SET_SIZE_TYPE elem)
{
    if(s==NULL)
    {
        return -2;
    }
    else
    {
        if(s->elems==NULL)
        {
            return -1;
        }
        else
        {
            if(s->multi==1)
            {
                s->elems[elem]++;
                s->count++;
            }
            else
            {
                s->elems[elem] = 1;
            }
        }
    }

    return 1;
}

int setDel(set s, _SET_SIZE_TYPE elem)
{
    if(s==NULL)
    {
        return -2;
    }
    else
    {
        if(s->elems==NULL)
        {
            return -1;
        }
        else
        {
            if(s->multi==1)
            {
                if (s->elems[elem]>1)
                {
                    s->elems[elem]--;
                    s->count--;
                }
                else
                {
                    s->count--;
                    s->elems[elem]=0;
                }
            }
            else
            {
                s->count--;
                s->elems[elem] = 0;
            }
        }
    }

    return 1;
}

set setRemake(set s, _SET_SIZE_TYPE size, int multi)
{
    s = setFree(s);
    s = setMake(size, multi);
    return s;
}

int setPrint(set s)
{
    if(s==NULL)
    {
        printf("NULL\n");
        return -2;
    }
    else
    {
        if(s->elems==NULL)
        {
            printf("{}\n");
            return -1;
        }
        else
        {
            if(s->multi==1)
            {
                printf("{");
                _SET_SIZE_TYPE i;
                for(i=0; i<s->size-1; i++)
                {
                    printf("%lld:%d, ", i, s->elems[i]);
                }
                printf("%lld:%d}\n", s->size-1, s->elems[s->size-1]);
            }
            else
            {
                printf("{");
                _SET_SIZE_TYPE i;
                for(i=0; i<s->size-2; i++)
                {
                    if(s->elems[i])
                        printf("%lld, ", i);
                }
                if(s->elems[s->size-1])
                {
                    printf("%lld", s->size-1);
                }
                printf("}\n");
            }
        }
    }

    return 1;
}
