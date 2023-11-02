#include "tree.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Node constructor/destructors
Node *newNode(Data d) { return NULL; }
void deleteNode(Node *n) { return; }
int printNode(const void *n) { return 0; }

// Tree constructor/destructors
Tree *newTree() { return NULL; }
void deleteTree(Tree *t) { return; }
int printTree(const void *t) { return 0; }

// Tree properties
size_t height(Tree *t) { return 0ULL; }
size_t size(Tree *t) { return 0ULL; }
size_t depth(Node *n) { return 0ULL; }
bool isLeaf(Node *n) { return false; }
Node *max(Node *n) { return NULL; }
Node *min(Node *n) { return NULL; }

// Tree mutators/accessors
void insertData(Tree *t, Data d) { return; }
Node *findData(Tree *t, Data d) { return NULL; }
Node *removeData(Tree *t, Data d) { return NULL; }

// Traversal Routines
void preorder(Tree *t, int (*func)(const void *)) { return; }
void inorder(Tree *t, int (*func)(const void *)) { return; }
void postorder(Tree *t, int (*func)(const void *)) { return; }