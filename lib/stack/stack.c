#include "stack.h"
#include <stddef.h>
#include <stdio.h>

/**
 * @brief      { Allocate and initialize a new Node. }
 *
 * @param[in]  d     { The value to be contained in the Node .data field }
 *
 * @return     { If allocation is successful, a pointer to a heap allocated
 *             Node. If allocation is unsuccessful, a nullptr. }
 *
 * @details       { This function has the following effects: (1) A heap
 * allocation for a struct Node (2) .value=d (3) .next=nullptr. }
 */
Node *newNode(Data d) { return NULL; }

/**
 * @brief      { Deallocate an existing Node }
 *
 * @param      n     { A pointer to the Node to be deallocated. }
 *
 *
 * @details    { If n is a nullptr, this function has no effect. It is the
 *             caller's responsibility to ensure that n points to a valid
 *             heap-allocated Node.
 *
 *             This function has the following effects: (1) .next=nullptr (2)
 *             The heap allocation pointed to by n is freed.
 *
 *             Note that this function does not return a null pointer itself;
 *             the caller should set any references to the Node object to
 *             nullptr after calling. }
 */
void deleteNode(Node *n) { return; }

/**
 * @brief      Print a Node.
 *
 * @param      n     { The node to be printed }
 *
 * @return     { The number of characters written, which is the sum of the
 * return values to any printf() calls. }
 *
 * @details    {If n is a nullptr, print `(null)`. Otherwise, print
 *             `Node(%p){.data=%d, .next=%p}`, where the first specifier is the
 *             address of the Node, and the following specifiers are the fields
 *             of the struct Node.
 *
 *             It is the caller's responsibility to ensure n is a valid Node.}
 */
int printNode(Node *n) { return 0; }

/**
 * @brief      { Allocate and initialize a new Stack. }
 *
 * @return     { If allocation is successful, a pointer to a heap allocated
 *             Stack. If allocation is unsuccessful, a nullptr. }
 *
 * @details    { This function has the following effects: (1) a heap allocation
 *             for a struct Stack (2) .top=nullptr (3) .size=0 }
 */
Stack *newStack() { return NULL; }

/**
 * @brief      { Deallocate a Stack }
 *
 * @param      s     { A pointer to a Stack to be deallocated. }
 *
 * @details    { If s is a nullptr, this function has no effect. It is the
 *             caller's responsibility to ensure that s points to a valid
 *             heap-allocated Stack.
 *
 *             This function has the following effects: (1) Call deleteNode() on
 *             each Node in the Stack (2) .top=nullptr (3) The heap allocation
 *             pointed to by s is freed.
 *
 *             Note that this function does not return a null pointer itself;
 *             the caller should set any references to the Stack object to
 *             nullptr after calling. }
 */
void deleteStack(Stack *s) { return; }

/**
 * @brief      Print a Stack.
 *
 * @param      s     { The Stack to be printed. }
 *
 * @return     { The number of characters written, which is the sum of the
 *             return values to any printf() calls. }
 *
 * @details    {If s is a nullptr, print `(null)`. Otherwise, print
 *             `Stack(%p){.top=%p, size=%llu}`, where the first specifier is the
 *             address of the Stack, and the following specifiers are the fields
 *             of the struct Stack. Then call printNode() on each Node in the
 *             Stack without popping.
 *
 *             It is the caller's responsibility to ensure s is a valid Node.}
 */
int printStack(Stack *s) { return 0; }

/**
 * @brief      Clears the given Stack.
 *
 * @param      s     { a pointer to the Stack to be cleared. }
 *
 * @details    { If s is a nullptr, behavior is undefined. It is the caller's
 *             responsibility to check this at the callsite.
 *
 *             This function has the following effects: (1) Any existing Nodes
 *             in the Stack are deallocated by calling `deleteNode()` (2)
 *             .top=nullptr (3) .size=0. The Stack itself is not deallocated.}
 */
void clear(Stack *s) { return; }

/**
 * @brief      { Get the size of the Stack }
 *
 * @param      s The Stack
 *
 * @return     { The Stack's .size value }
 */
size_t size(Stack *l) { return 0LL; }

/**
 * @brief      { Removes the top element of the Stack and returns it. }
 *
 * @param      s     The Stack
 *
 * @return     { If the Stack storage is not empty, return a pointer to the
 *             removed element. The Node is not freed. If the Stack storage is
 *             empty, return a nullptr. }
 *
 * @details    { If s is a nullptr, behavior is undefined.
 *
 *             This function has the following effects: (1) The top element is
 *             removed from storage; (2) .top is updated; (3) .size is
 * decremented.}
 */
Node *pop(Stack *s) { return NULL; }

/**
 * @brief      { Inserts an element at the top of the Stack }
 *
 * @param      s     The Stack
 * @param[in]  d     { The data value for the Node to be pushed }
 *
 * @return     { A pointer to a Node containing the data value d. This Node is
 *             at the top of the Stack. }
 *
 * @details    { If q is a nullptr, behavior is undefined.
 *
 *             This function has the following effects: (1) A new Node is
 *             allocated and initialized; (2) The Node is inserted at .top; (3)
 *             .top is updated; (4) .size is incremented }
 */
Node *push(Stack *s, Data d) { return NULL; }

/**
 * @brief      { Get a pointer to the Node at the top of the Stack without
 *             popping it. }
 *
 * @param      s     The Stack
 *
 * @return     { If the Stack is not empty, a pointer to the Node at the head of
 *             the Stack. If the Stack is empty, a nullptr. }
 */
Node *top(Stack *s) { return NULL; }

/**
 * @brief      { Traverse a Stack from top to bottom, calling a callback visitor
 * function on each visited node.}
 *
 * @param      s     { The Stack to be traversed. }
 * @param[in]  func  { The callback function to be called when visiting each
 *                   Node. Its single argument is a pointer to the Node being
 *                   visited (cast as a const void pointer).}
 */
void traverse(Stack *s, int (*func)(const void *)) { return; }
