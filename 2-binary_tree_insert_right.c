#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds right child to parent node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
