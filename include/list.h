#include <stdbool.h> // bool
#include <stdint.h>  // uint64_t
#include <stddef.h>  // size_t

#ifndef DATA
#define DATA
typedef uint64_t Data;
#endif //DATA

#ifndef LIST_H
#define LIST_H

typedef struct Node{
	Data data;					// the storage field
	struct Node *next, *prev; 	// pointers to adjacent nodes
} Node;

typedef struct List{
	Node *head, *tail;	// head and tail pointers to the doubly linked list
	size_t len;			// the number of nodes in the list
} List;

Node *newNode(Data d);
void deleteNode(Node *n);

List *newList();
void deleteList(List *l);

size_t length(List *l);
Node *find(List *l, Data d);
List *insert(List *l, Node *n, Node *pos);
List *append(List *l, Node *n);
List *remove(List *l, Node *pos);
void printNode(Node* n);
void printList(List *l);
void traverse(List *l, int (*func)(void*));

#endif // LIST_H