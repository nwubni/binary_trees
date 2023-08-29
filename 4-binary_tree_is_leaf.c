#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf node
 * @node: Pointer to node
 * Return: True (1), False (0)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
