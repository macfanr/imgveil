//
//  file_list.c
//  imgveil
//
//  Created by Xu Jun on 8/9/12.
//
//

#include <stdlib.h>
#include "file_list.h"

file_list_t *init_file_path_list()
{
    file_list_t *header = (file_list_t*)malloc(sizeof(file_list_t));
    if(header)
    {
		header->next = NULL;
        return header;
    }
    return NULL;
}

void dealloc_file_path_list(file_list_t *header)
{
    file_list_t *t = header;
    do
    {
        file_list_t *next = t->next;
        
        if(next) free(t);
        
        t = next;
    }while (t);
}
