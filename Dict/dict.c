#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict.h"

dictItem dictAddEntry(Dictionary* dict, const char *key, const char *val) {
    // Allocate memory for a new item
    dictItem newEntry;
    newEntry.key = strdup(key);
    newEntry.val = strdup(val);

    // Add the new item to the dictionary's entries
    dict->entries = realloc(dict->entries, (dict->size + 1) * sizeof(dictItem));
    dict->entries[dict->size] = newEntry;
    dict->size++;

    return newEntry;
}

void freeItem(dictItem* entry) {
    free(entry->key);
    free(entry->val);
}

char* getVal(dictItem* entry) {
    return entry->val;
}
