#include "binary_trees.h"

/**
 * get_height - Gets height of tree
 * @root: Pointer to tree root
 * @depth: Current depth of tree
 * @height: Height of tree
 * Return: Void
*/

void get_height(const binary_tree_t *root, size_t depth, size_t *height)
{
	if (!root)
		return;

	if (*height < depth)
		*height = depth;

	get_height(root->left, depth + 1, height);
	get_height(root->right, depth + 1, height);
}

/**
 * binary_tree_height - Gets height of tree
 * @tree: Pointer to tree root
 * Return: Height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	get_height(tree, 0, &height);

	return (height);
}

