#include "binary_trees.h"

/**
* bst_insert - Inserts value into binary search tree
* @tree: Binary tree root
* @value: Value to insert
* Return: Pointer to new node
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);

	bst_t *curr = *tree;

	if (!curr)
	{
		bst_t *new_node = binary_tree_node(curr, value);
		*tree = new_node;
		return (new_node);
	}

	if (value < curr->n)
	{
		if (curr->left)
			return (bst_insert(&(curr->left), value));

		bst_t *new_node = binary_tree_node(curr, value);
		curr->left = new_node;
		return (new_node);
	}

	if (value > curr->n)
	{
		if (curr->right)
			return (bst_insert(&(curr->right), value));

		bst_t *new_node = binary_tree_node(curr, value);
		curr->right = new_node;
		return (new_node);
	}

	return (NULL);
}
