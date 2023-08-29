#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is the root node
 * @node: Pointer to node
 * Return: True (1), False (0)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
