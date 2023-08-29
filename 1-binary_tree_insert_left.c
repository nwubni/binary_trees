#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds left child to parent node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	parent->left = node;

	return (node);
}
