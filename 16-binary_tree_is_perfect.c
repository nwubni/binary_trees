#include "binary_trees.h"

/**
* inorder - Inorder traversal of binary tree
* @tree: Pointer to binary tree node
* @leaves: Counts leaf nodes
* @depth: Depth of tree
* @height: Binary tree height
* Return: Void
*/

void inorder(const binary_tree_t *tree, int *leaves, int depth, int *height)
{
	if (!tree)
		return;

	if (*height < depth)
		*height = depth;

	inorder(tree->left, leaves, depth + 1, height);

	*leaves += (!tree->left && !tree->right);

	inorder(tree->right, leaves, depth + 1, height);
}

/**
* binary_tree_is_perfect - Checks if binary tree is perfect
* @tree: Pointer to root of binary tree
* Return: True (1), False (0)
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaves = 0;
	int height = 0;
	int nodes = 0;

	if (!tree)
		return (0);

	inorder(tree, &leaves, 0, &height);

	nodes = (1 << (height)); /* 2^height */

	return (nodes == leaves);
}

