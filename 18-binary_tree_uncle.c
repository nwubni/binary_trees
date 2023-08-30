#include "binary_trees.h"

/**
* binary_tree_sibling - Finds sibling
* @node: Node to find sibling
* Return: Pointer to node's sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->right == node)
	{
		if (parent->left)
			return (parent->left);
	}

	if (parent->left == node)
	{
		if (parent->right)
			return (parent->right);
	}

	return (NULL);
}

/**
* binary_tree_uncle - Finds uncle
* @node: Node to find sibling
* Return: Pointer to node's uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	return (binary_tree_sibling(parent));

}
