#include "binary_trees.h"

/**
* bst_search - Searches for value in tree
* @tree: Pointer to tree root
* @value: Search value
* Return: Pointer to value node
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (value > tree->n)
		return (bst_search(tree->right, value));

	if (value < tree->n)
		return (bst_search(tree->left, value));

	return ((bst_t *)tree);
}
