#ifndef DICT_H
#define DICT_H

#include "stdlib.h"

struct dictItem_ {
    char* val;
    char* key;
};

typedef struct dictItem_ dictItem;

typedef struct Dictionary {
    dictItem* entries;
    size_t size;
} Dictionary;

dictItem dictAddEntry(Dictionary* dict, const char *key, const char *val);

void freeItem(dictItem* entry);

char* getVal(dictItem* entry);

#endif // DICT_H
