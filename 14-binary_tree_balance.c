#include "binary_trees.h"

/**
 * get_height - Gets height of tree
 * @root: Pointer to tree root
 * @depth: Current depth of tree
 * @height: Height of tree
 * Return: Void
*/

void get_height(const binary_tree_t *root, int depth, int *height)
{
	if (*height < depth)
		*height = depth;

	if (!root)
		return;

	get_height(root->left, depth + 1, height);
	get_height(root->right, depth + 1, height);
}

/**
* binary_tree_balance - Gets balance factor of binary tree
* @tree: Pointer to tree root
* Return: Integer
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	get_height(tree->left, 0, &left);
	get_height(tree->right, 0, &right);

	return (left - right);
}
