#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of elements in the array.
 *
 * Return: On success a pointer to the root node.
 * Otherwise NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t index = 0;
	bst_t *node;

	node = NULL;

	for (; index < size; index++)
		bst_insert(&node, array[index]);
	return (node);
}
