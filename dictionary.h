#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char *word;
	int count;
	struct node *next;
};

struct hash_table{
	int size;
	struct node **chain;
};

struct node *new_node(char *key);
void new_hashtable(struct hash_table *table, int M);
int update_chain(struct node *n, char *key);
int hash(char *key, int M);

