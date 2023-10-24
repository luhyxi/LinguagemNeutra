#include "dict.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data entryConstructor(const char *key, const char *val) {
    struct Data entry;
    entry.key = (char *)malloc(strlen(key) + 1);  // +1 for null terminator
    entry.val = (char *)malloc(strlen(val) + 1);  // +1 for null terminator

    if (entry.key && entry.val) {
        strcpy(entry.key, key);
        strcpy(entry.val, val);
    } else {
        // Handle memory allocation failure
        // You can add appropriate error handling here
    }

    return entry;
}
void entryDestructor(struct Data *entry) {
    free (entry->key);
    free (entry->val);
    free(entry);
}

