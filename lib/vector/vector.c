#include "vector.h"
#include <stddef.h>
#include <stdint.h>

/**
 * @brief      { Allocate a new vector }
 *
 * @param[in]  capacity  The capacity of the array
 *
 * @return     { Return a pointer to the newly allocated Vector. }
 *
 * @details    { This function has the following effects: (1) Allocate array
 *             storage which is properly-sized and zero-initialized; (2) .size
 *             is set to 0; (3) .capacity is set to the size of the array
 *             storage.}
 */
Vector *newVector(size_t capacity) { return NULL; }

/**
 * @brief      { De-allocate an existing vector, including all internal
 *             storage. }
 *
 * @param      v     { Pointer to the vector to be deallocated. }
 */
void deleteVector(Vector *v) { return; }

/**
 * @brief      Prints the contents of the vector.
 *
 * @param      v     { A void pointer to the vector to print }
 *
 * @return     { The number of characters written, which is the sum of the
 *             return values to any printf() calls. }
 *
 * @details       { The output is formatted `Vector(%p){.size=%lu,
 *             .array={%llu,%llu,%llu,..}}` where the first specifier is the
 *             address of the Vector, and subsequent specifiers contain items in
 *             the Vector's storage array (not including any elements beyond . }
 */
int printVector(const void *v) { return 0; }

/**
 * @brief      { Return a pointer to the Data element at an index. If the index
 *             is out of bounds, a null pointer is returned.  }
 *
 * @param      v      { The vector }
 * @param[in]  index  The index
 *
 * @return     { The pointer to the Data element. }
 */
Data *at(Vector *v, size_t index) { return NULL; }

/**
 * @brief      Clears the vector in place.
 *
 * @param      v     { The vector }
 *
 * @details    { Clearing a vector means setting all array values to zero, and
 *             updating .size=0. Capacity does not change, nor is any memory
 *             freed. }
 */
void clear(Vector *v) { return; }

/**
 * @brief      Search for the first matching Data item.
 *
 * @param      v     { The vector to search }
 * @param[in]  d     The Data to find
 *
 * @return     { A pointer to the found Data item. If the item is not found, a
 *             nullptr is returned. }
 */
Data *find(Vector *v, Data d) { return NULL; }

/**
 * @brief      {Inserts a data item into the Vector.}
 *
 * @param      v     { The vector to search }
 * @param[in]  d     { The data value to insert }
 * @param[in]  idx   The insertion index
 *
 * @return     { If idx is in bounds, a pointer to the newly inserted item. If
 *             idx is out of bounds, a null pointer; the array is unchanged.
 *
 * @details    { Insertions can be destructive, potentially overwriting an
 *             existing item. It is the caller's responsibility to check this.
 *
 *             Upon insertion, .size=max(idx+1,.size). If idx > .size-1, the
 *             elements between array[size-1] and array[idx] become "filled" by
 *             zeroes. This is also caller's responsibility.
 *
 *             If inserting the item would cause size > capacity, the vector's
 *             array is resized by a factor of 2, then the new element is
 *             inserted. }
 */
Data *insert(Vector *v, Data d, size_t idx) { return NULL; }

/**
 * @brief      Dynamically resizes the Vector's array storage.
 *
 * @param      v      { A pointer to the old vector }
 * @param[in]  count  The new capacity of the array.
 *
 * @return     { A pointer to the new vector. }
 *
 * @details    {  This function has the following effects: (1) Reallocates a new
 *             array, (2) copies contents from old to new (3) Updates .capacity
 *             (4) Frees the old array (if necessary). Whether (1), (2) and (4)
 *             are done manually or by realloc() is implementation dependent.
 *
 *             If the array is resized to a smaller size, some data may be lost
 *             (i.e. data is not copied beyond index=capacity-1. It is the
 *             caller's responsibility to check this condition.
 *             
 *             If realloc() fails, return a void pointer. It is the caller's responsibility to check this condition.}
 */
Vector *resize(Vector *v, size_t count) { return NULL; }

/**
 * @brief      Remove an item from the vector.
 *
 * @param      v      { The vector whose data item will be removed }
 * @param[in]  index  The index of the data item to remove.
 *
 * @return     { A pointer to the former address of item removed from the
 * Vector. }
 *
 * @details    { If the index is out of bounds, return a nullptr. Note that
 *             removal also causes the .size field to update, but not the
 *             .capacity field. Furthermore, no memory is freed.
 *
 *             Consider a vector={.size=4, .array={0,1,2,3}}, and the removal
 *             index=2. Then after the remove() call, the vector is `{.size=4,
 *             .array={0,1,3,0}}`. The item '2' is removed, all subsequent
 *             values shift left one index, and the vacated storage is filled
 *             with 0. The return value is (&vector.array)+2}
 */
Data *remove(Vector *v, size_t index) { return NULL; }
