#include "binary_trees.h"

/**
* inorder - Does inorder traversal of binary tree
* @tree: Binary tree node
* @sz: Size of binary tree
* Return: Void
*/

void inorder(const binary_tree_t *tree, size_t *sz)
{
	if (!tree)
		return;

	inorder(tree->left, sz);
	*sz += 1;
	inorder(tree->right, sz);
}

/**
 * binary_tree_size - Gets the size of a binary tree
 * @tree: Pointer to tree node
 * Return: Integer
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	inorder(tree, &sz);

	return (sz);
}
