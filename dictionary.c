#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *word;
	int count;
	struct node *next;
}node;

typedef struct{
	int size;
	node **chain;
} hash_table;



