#include "binary_trees.h"

/**
* inorder - Does inorder traversal of binary tree
* @tree: Binary tree node
* @prev: Previous node value in tree
* @ans: Result of validation
* Return: Void
*/

void inorder(const binary_tree_t *tree, int *prev, int *ans)
{
	if (!tree || !(*ans))
		return;

	inorder(tree->left, prev, ans);

	if (*prev >= tree->n)
		*ans = 0;

	*prev = tree->n;

	inorder(tree->right, prev, ans);
}

/**
* binary_tree_is_bst - Validates a binary search tree
* @tree: Binary search tree root
* Return: 1 if true, otherwise 0
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int ans = 1;
	int prev = -1000;

	inorder(tree, &prev, &ans);

	return (ans);
}
