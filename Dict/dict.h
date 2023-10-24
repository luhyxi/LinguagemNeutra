#ifndef LINGUAGEMNEUTRA_DICT_H
#define LINGUAGEMNEUTRA_DICT_H

#define MAX_KEY_LENGTH 50
#define MAX_VAL_LENGTH 50

struct Data {
    char *key[MAX_KEY_LENGTH];
    char val[MAX_VAL_LENGTH];
};

struct Data entryConstructor(const char *key, const char *val);

void entryDestructor(struct Data *entry);

#endif // LINGUAGEMNEUTRA_DICT_H
