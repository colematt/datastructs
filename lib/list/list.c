#include "list.h"
#include <stddef.h>
#include <stdint.h>

/**
 * @brief      { Allocate a new node with an initialized value and nullptr for
 *             next and previous pointers. }
 *
 * @param[in]  d     { The value to be contained in the node .data field }
 *
 * @return     { If allocation is successful, a pointer to the new node. If
 *             allocation is unsuccessful, a null pointer. }
 */
Node *newNode(Data d);

/**
 * @brief      { Deallocate an existing node }
 *
 * @param      n     { A pointer to the node to be deallocated }
 */
void deleteNode(Node *n);

/**
 * @brief      { Initialize a new list structure, with nullptr for the head and
 *             tail pointers. }
 *
 * @return     { A pointer to the new list structure. }
 */
List *newList();

/**
 * @brief      { Clean up a list structure, setting the head and tail pointers
 *             to null. Note that this function does not return a null pointer
 *             itself; the caller should set List *l to nullptr after calling. }
 *
 * @param      l     { A pointer to the list to be deleted. }
 */
void deleteList(List *l);

/**
 * @brief      { The number of nodes in the List. Value is contained in `.len`
 *             field, not calculated in O(n) time }
 *
 * @param      l     { A pointer to the list }
 *
 * @return     { A count of the number of nodes in the list. }
 */
size_t length(List *l);

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
 * @param      n     { A pointer to the node to be inserted. }
 * @param      pos   { A pointer to the node to be inserted before.}
 *
 * @note       { If l or n are a nullptr, behavior is undefined; return a
 *             nullptr. If pos is a nullptr, assume the list is empty, and
 *             initialize the list's head and tail to the inserted node. If the
 *             list was not actually empty, then existing linked nodes will be
 *             lost. It is the caller's responsibility to check these conditions
 *             prior to calling.}
 *
 * @return     { A pointer to the modified list. }
 */
List *insert(List *l, Node *n, Node *pos);

/**
 * @brief      { Insert a Node at the end of the list. Increment the `.size`
 *             field and update the tail and/or head pointers.}
 *
 * @param      l     { A pointer to the List to have contents added at the end. }
 * @param      n     { A pointer to the Node to be added. }
 *
 * @return     { A pointer to the modified List. }
 *
 * @note       { If l or n is a nullptr, behavior is undefined; return a
 *             nullptr. If l has no nodes (`.len=0`), initialize the list with n
 *             and set `.len=1`.}
 */
List *append(List *l, Node *n);

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
 * @note       { It is the caller's responsibility to verify that l and n are
 *             valid pointers. If either is a nullptr, return a nullptr and do
 *             not modify l. }
 */
List *remove(List *l, Node *n);

/**
 * @brief      Prints a node.
 *
 * @param      n     { parameter_description }
 */
void printNode(Node* n);

/**
 * @brief      Prints a list.
 *
 * @param      l     { parameter_description }
 */
void printList(List *l);

/**
 * @brief      { function_description }
 *
 * @param      l     { parameter_description }
 * @param[in]  func  The function
 */
void traverse(List *l, int (*func)(void*));