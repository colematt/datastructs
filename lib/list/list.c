#include "list.h"
#include <stddef.h>
#include <stdint.h>

/**
 * @brief      { Allocate and initialize a new Node. }
 *
 * @param[in]  d     { The value to be contained in the Node .data field }
 *
 * @return     { If allocation is successful, a pointer to a heap-allocated and
 * initialized Node. If allocation is unsuccessful, a nullptr is returned. }
 *
 * @details       { This function has the following effects: (1) A heap
 * allocation for a struct Node (2) .data=d (3) .next=nullptr }
 */
Node *newNode(Data d) { return NULL; }

/**
 * @brief      { Deallocate an existing Node }
 *
 * @param      n     { A pointer to the Node to be deallocated. }
 *
 *
 * @details       { If n is a nullptr, this function has no effect. It is the
 *             caller's responsibility to ensure that n points to a valid
 *             heap-allocated Node.
 *
 *             This function has the following effects: (1) .head, .tail are set
 *             to nullptr. (2) The heap allocation pointed to by n is freed.
 *
 *             Note that this function does not return a null pointer itself;
 *             the caller should set any references to the Node object to
 *             nullptr after calling. }
 */
void deleteNode(Node *n) { return; }

/**
 * @brief      Prints a node.
 *
 * @param      n     { The node to be printed }
 *
 * @return     { The number of characters written, which is the sum of the
 *             return values to any printf() calls. }
 *
 * @details       {If n is a nullptr, print `(null)`. Otherwise, print
 *             `Node(%p){.data=%d, .prev=%p, .next=%p}`, where the first
 *             specifier is the address of the Node, and the following
 *             specifiers are the fields of the struct Node.
 *
 *             It is the caller's responsibility to ensure n is a valid Node.}
 */
int printNode(const void *n) { return 0; }

/**
 * @brief      { Allocate and initialize a new List. }
 *
 * @return     { If allocation is successful, a pointer to the new List
 *             structure. If allocation is unsuccessful, a nullptr }
 *
 * @details       { This function has the following effects: (1) A heap
 * allocation for a struct List (2) .head, .tail=nullptr. (3) .size=0 }
 */
List *newList() { return NULL; }

/**
 * @brief      { Deallocate an existing List. }
 *
 * @param      l     { A pointer to the list to be deleted. }
 *
 * @details       { If l is a nullptr, this function has no effect. It is the
 *             caller's responsibility to ensure that n points to a valid
 *             heap-allocated List.
 *
 *             This function has the following effects: (1) Each Node in the
 *             List is also deallocated by calling `deleteNode()` (2) .head,
 *             .tail=nullptr (3) The heap allocation pointed to by l is freed.
 *
 *             Note that this function does not return a null pointer itself;
 *             the caller should set any references to the List object to
 *             nullptr after calling.}
 */
void deleteList(List *l) { return; }

/**
 * @brief      Prints a list.
 *
 * @param      l     {The list to be printed.}
 *
 * @return     { The number of characters written, which is the sum of the
 *             return values to any printf() calls. }
 *
 * @details       { If n is a nullptr, print `(null)`. Otherwise, print
 *             `Node(%p){.head=%p, .tail=%p, .len=%lu}`, where the first
 *             specifier is the address of the Node, and subsequent specifiers
 *             are the fields of the struct. It is the caller's responsibility
 *             to ensure l is a valid List.}
 */
int printList(const void *l) { return 0; }

/**
 * @brief      { Insert a Node at the end of the list. }
 *
 * @param      l     { A pointer to the List for appending. }
 *
 * @param      n     { A pointer to the Node to be inserted at end. }
 *
 * @return     { A pointer to the modified List. }
 *
 * @details    { This function has the following effects: (1) l.tail.next is set
 *             to the newly inserted node (2) update .tail (3) Increment the
 *             `.size` field
 *
 *             If l or n is a nullptr, behavior is undefined. If l has no nodes
 *             (`.len=0` and `l.head,tail=nullptr`), set .head and .tail to n,
 *             and set `.len=1`. }
 */
List *append(List *l, Node *n) { return NULL; }

/**
 * @brief      Clears the given List.
 *
 * @param      l     { a pointer to the List to be cleared. }
 *
 * @details    { If l is a nullptr, behavior is undefined.
 *
 *             This function has the following effects: (1) Any existing Nodes
 *             in the List are deallocated by calling `deleteNode()` (2) .head,
 *             .tail=nullptr (3) .size=0 }
 */
void clear(List *l) { return; }

/**
 * @brief      Searches for the first node whose `.data` field matches.
 *
 * @param      l     { A pointer to the list }
 * @param[in]  d     { The data field to be searched }
 *
 * @return     { If found, a pointer to the node containing the matching field.
 *             If not found, a nullptr. }
 */
Node *find(List *l, Data d);

/**
 * @brief      { Insert a Node immediately before a position pointer. Increment
 *             the `.size` field of the linked list structure. }
 *
 * @param      l     { The linked list  }
 * @param      n     { A pointer to the Node to be inserted. }
 * @param      pos   { A pointer to the Node to be inserted before.}
 *
 * @details       { If l or n are a nullptr. If pos is a nullptr, assume the
 * list is empty, and initialize the list's head and tail to the inserted node.
 * If the list was not actually empty, then existing linked nodes will be lost.
 * It is the caller's responsibility to check these conditions prior to
 * calling.}
 *
 * @return     { A pointer to the modified list. }
 */
List *insert(List *l, Node *n, Node *pos);

/**
 * @brief      { The number of nodes in the List. Value is contained in `.len`
 *             field, not calculated in O(n) time. }
 *
 * @param      l     { A pointer to the list }
 *
 * @return     { A count of the number of nodes in the list. }
 */
size_t length(List *l) { return 0LL; }

/**
 * @brief      { Removed a Node pointed to by pos from the list pointed to by l.
 *             Decrement the `.size` field, and update the tail and/or head
 *             pointer as required. }
 *
 * @param      l     { The list to have contents removed from. }
 * @param      n     { A pointer to the Node to be removed. }
 *
 * @return     { A pointer to the modified list. }
 *
 * @details       { It is the caller's responsibility to verify that l and n are
 *             valid pointers. If either is a nullptr, return a nullptr and do
 *             not modify l. }
 */
List *remove(List *l, Node *n) { return NULL; }

/**
 * @brief      { Traverse a List, calling a callback visitor function on
 *             each visited node.}
 *
 * @param      l     { The List to be traversed. }
 * @param[in]  func  { The callback function to be called when visiting each
 *                   node. Its single argument is a pointer to the node being
 *                   visited (cast as a const void pointer).}
 */
void traverse(List *l, int (*func)(const void *n)) { return; }