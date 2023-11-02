#include "queue.h"
#include <stddef.h>
#include <stdint.h>

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
 * @details       { If n is a nullptr, this function has no effect. It is the
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
 *             return values to any printf() calls. }
 *
 * @details       {If n is a nullptr, print `(null)`. Otherwise, print
 *             `Node(%p){.data=%d, .next=%p}`, where the first specifier is the
 *             address of the Node, and the following specifiers are the fields
 *             of the struct Node.
 *
 *             It is the caller's responsibility to ensure n is a valid Node.}
 */
int printNode(const void *n) { return 0; }

/**
 * @brief      { Allocate and initialize a new Queue. }
 *
 * @return     { If allocation is successful, a pointer to a heap allocated
 *             Queue. If allocation is unsuccessful, a nullptr. }
 *
 * @details       { This function has the following effects: (1) a heap
 * allocation for a struct Queue (2) .head,.tail=nullptr (3) .size=0 }
 */
Queue *newQueue() { return NULL; }

/**
 * @brief      { Deallocate a Queue and all Nodes it its storage. }
 *
 * @param      q     { A pointer to a Queue to be deallocated. }
 *
 * @details    { If q is a nullptr, this function has no effect. It is the
 *             caller's responsibility to ensure that q points to a valid
 *             heap-allocated Queue.
 *
 *             This function has the following effects: (1) Call deleteNode() on
 *             each Node in the Queue (2) .head,.tail=nullptr (3) The heap
 *             allocation pointed to by q is freed.
 *
 *             Note that this function does not return a null pointer itself;
 *             the caller should set any references to the Queue object to
 *             nullptr after calling. }
 */
void deleteQueue(Queue *q) { return; }

/**
 * @brief      Print a Queue.
 *
 * @param      q     { The Queue to be printed. }
 *
 * @return     { The number of characters written, which is the sum of the
 *             return values to any printf() calls. }
 *
 * @details    {If q is a nullptr, print `(null)`. Otherwise, print
 *             `Queue(%p){.head=%p, .tail=%p .size=%llu}`, where the first
 *             specifier is the address of the Queue, and the following
 *             specifiers are the fields of the struct Queue. Then call
 *             printNode() on each Node in the Queue without dequeuing.
 *
 *             It is the caller's responsibility to ensure q is a valid Queue.}
 */
int printQueue(const void *q) { return 0; }

/**
 * @brief      { Get a pointer to the Node at the tail of the Queue without
 *             removing it. }
 *
 * @param      q     The Queue
 *
 * @return     { If the Queue is not empty, a pointer to the Node at the tail of
 *             the Queue. If the Queue is empty, a nullptr. }
 */
Node *back(Queue *q) { return NULL; }

/**
 * @brief      Clears the given Queue.
 *
 * @param      q     { a pointer to the Queue to be cleared. }
 *
 * @details    { If q is a nullptr, behavior is undefined. It is the caller's
 *             responsibility to check this at the callsite.
 *
 *             This function has the following effects: (1) Any existing Nodes
 *             in the Queue are deallocated by calling `deleteNode()` (2) .head,
 *             .tail=nullptr (3) .size=0. The Queue itself is not deallocated. }
 */
void clear(Queue *q) { return; }

/**
 * @brief      { Removes the first element of the Queue }
 *
 * @param      q     The Queue
 *
 * @return     { If the Queue storage is not empty, return a pointer to the
 *             removed element. The node is not freed. If the Queue storage is
 *             empty, return a nullptr. }
 *
 * @details    { If q is a nullptr, behavior is undefined.
 *
 *             This function has the following effects: (1) The first element is
 *             removed from storage; (2) .head is updated (and possibly .tail if
 *             the Queue had only one element); (3) .size is decremented.}
 */
Node *dequeue(Queue *q) { return NULL; }

/**
 * @brief      { Inserts an element at the end of the Queue }
 *
 * @param      q     The Queue
 * @param[in]  d     { The data value to be enqueued  }
 *
 * @return     { A pointer to a Node containing the data value d. This Node is
 *             at the end of the Queue. }
 *
 * @details    { If q is a nullptr, behavior is undefined.
 *
 *             This function has the following effects: (1) A new Node is
 *             allocated and initialized; (2) The Node is inserted at .tail; (3)
 *             .tail (and possibly .head if the Queue was empty) is updated; (4)
 *             .size is incremented }
 */
Node *enqueue(Queue *q, Data d) { return NULL; }

/**
 * @brief      { Get a pointer to the Node at the head of the Queue without
 *             dequeuing it. }
 *
 * @param      q     The Queue
 *
 * @return     { If the Queue is not empty, a pointer to the Node at the head of
 *             the Queue. If the Queue is empty, a nullptr. }
 */
Node front(Queue *q);

/**
 * @brief      { Get the size of the Queue }
 *
 * @param      q     The Queue
 *
 * @return     { The Queue's .size value }
 */
size_t size(Queue *q) { return 0LL; }

/**
 * @brief      { Traverse a Queue from head to tail, calling a callback visitor
 *             function on each visited node.}
 *
 * @param      q     { The Queue to be traversed. }
 * @param[in]  func  { The callback function to be called when visiting each
 *                   node. Its single argument is a pointer to the node being
 *                   visited (cast as a const void pointer).}
 */
void traverse(Queue *q, int (*func)(const void *)) { return; }
