#include "binary_trees.h"

/**
* array_to_bst - Tunrs array to bst
* @array: Array parameter
* @size: Size of array
* Return: Pointer to root bst
*/

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
