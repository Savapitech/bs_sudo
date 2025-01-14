/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hashtable
*/

#ifndef HASTABLE_H_
    #define HASTABLE_H_
    #include "eyes.h"

typedef struct hashtable_s {
    int (*fnct_hash)(char *, int);
    int len;
    node_t *data;
} hashtable_t;

// hash
int hash(char *key, int len);

//create and destroy table
hashtable_t *new_hashtable(int (*hash_fnct)(char *, int), int len);
void delete_hashtable(hashtable_t *hashtable);

// handle table
void ht_dump(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
char *ht_search(hashtable_t *ht, char *key);
int ht_delete(hashtable_t *ht, char *key);

#endif /* !HASTABLE_H_ */
