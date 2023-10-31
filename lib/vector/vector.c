#include "vector.h"
#include <stddef.h>
#include <stdint.h>

/**
 * @brief      { Allocate a new vector, whose array storage is properly-sized,
 *             and zero-initialized, and marked unused. }
 *
 * @param[in]  size  The size
 *
 * @return     { Return a pointer to the newly allocated vector. }
 */
Vector *newVector(size_t size) { return NULL; }

/**
 * @brief      { De-allocate an existing vector, including all internal
 *             storage. }
 *
 * @param      v     { Pointer to the vector to be deallocated. }
 */
void deleteVector(Vector *v) { return; }

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
 * @brief      Clears the vector in place, setting all values to zero.
 *
 * @param      v     { The vector }
 *
 * @return     A pointer to the cleared vector.
 */
Vector *clear(Vector *v) { return NULL; }

/**
 * @brief      Searches for the first matching Data item.
 *
 * @param      v     { The vector to search }
 * @param[in]  d     The Data to find
 *
 * @return     { The index of the found Data item }
 */
size_t find(Vector *v, Data d) { return 0; }

/**
 * @brief      {Inserts a data item into the Vector, potentially overwriting an
 *             existing item. If the index is out of bounds, a null pointer is
 *             returned.}
 *
 * @param      v     { The vector to search }
 * @param[in]  d     { The data value to insert }
 * @param[in]  idx   The insertion index
 *
 * @return     { If idx is in bounds, a pointer to the newly inserted item. If
 *             idx is out of bounds, a null pointer; the array is unchanged. }
 */
Data *insert(Vector *v, Data d, size_t idx) { return NULL; }

/**
 * @brief      Prints the contents of the vector.
 *
 * @param      v     { The vector to print }
 *
 * @note       Consider a vector of size 4. The output is formatted `{.size=4,
 *             .array={0,1,2,3}}`
 */
void print_Vector(Vector *v) { return; }

/**
 * @brief      Reallocates a new vector, copies contents from old to new, and
 *             frees the old vector. If the vector is resized to a smaller size,
 *             some data may be lost (i.e. data is not copied beyond
 *             index=size-1. The .size field of the new Vector is updated.
 *
 * @param      v     { A pointer to the old vector }
 * @param[in]  size  The size of the new vector.
 *
 * @return     { A pointer to the new vector. }
 */
Vector *resize(Vector *v, size_t size) { return NULL; }

/**
 * @brief      Set a data item at index to zero. Do not resize or free memory.
 *
 * @param      v      { The vector whose data item will be removed }
 * @param[in]  index  The index of the data item to remove.
 *
 * @return     { The Data item removed from the Vector. }
 *
 * @note       Consider a vector={.size=4, .array={0,1,2,3}}, and the removal
 *             index=2. Then after the remove() call, the vector is
 *             `{.size=4, .array={0,1,0,3}}`
 */
Data remove(Vector *v, size_t index) { return 0; }
