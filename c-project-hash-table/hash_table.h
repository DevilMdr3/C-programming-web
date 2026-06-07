#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stddef.h>

/* ─── Configuration ───────────────────────────────────────────── */
#define HT_INITIAL_CAPACITY  16
#define HT_LOAD_FACTOR_MAX   0.75  /* resize when load > 75% */

/* ─── Types ──────────────────────────────────────────────────── */

/**
 * A single key-value node stored in the chained bucket list.
 */
typedef struct ht_node {
    char       *key;        /* heap-allocated copy of the key   */
    char       *value;      /* heap-allocated copy of the value */
    struct ht_node *next;   /* next node in the same bucket     */
} ht_node_t;

/**
 * The hash table itself.
 * Uses open-addressing with separate chaining per bucket.
 */
typedef struct {
    ht_node_t **buckets;   /* array of bucket-list heads */
    size_t      capacity;  /* total number of buckets    */
    size_t      size;      /* number of stored key-value pairs */
} hash_table_t;

/* ─── API ────────────────────────────────────────────────────── */

/** Allocate and initialise a new hash table.  Returns NULL on failure. */
hash_table_t *ht_create(void);

/** Free all memory owned by the table (including the struct itself). */
void ht_destroy(hash_table_t *ht);

/**
 * Insert or update a key-value pair.
 * Both key and value are copied — the caller owns its originals.
 * Returns 0 on success, -1 on allocation failure.
 */
int ht_set(hash_table_t *ht, const char *key, const char *value);

/**
 * Look up a key.
 * Returns the stored value pointer (valid until next mutation) or NULL.
 */
const char *ht_get(const hash_table_t *ht, const char *key);

/**
 * Delete a key-value pair.
 * Returns 1 if the key was found and removed, 0 if not found.
 */
int ht_delete(hash_table_t *ht, const char *key);

/** Print every bucket and its chain to stdout (useful for debugging). */
void ht_print(const hash_table_t *ht);

/** Return the current number of stored pairs. */
size_t ht_size(const hash_table_t *ht);

#endif /* HASH_TABLE_H */
