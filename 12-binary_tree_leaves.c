#include "binary_trees.h"

/**
* inorder - Does inorder traversal of binary tree
* @tree: Binary tree node
* @count: Keeps count of leaves
* Return: Void
*/

void inorder(const binary_tree_t *tree, size_t *count)
{
	if (!tree)
		return;

	inorder(tree->left, count);

	if (!tree->left && !tree->right)
		*count += 1;

	inorder(tree->right, count);
}

/**
 * binary_tree_leaves - Counts leaves of a binary tree
 * @tree: Pointer to tree node
 * Return: Integer
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	inorder(tree, &count);

	return (count);
}

