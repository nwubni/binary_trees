#include "binary_trees.h"

/**
* is_full - Validates tree for fullness
* @ans: Result of validation
* Return: Void
*/

void is_full(const binary_tree_t *tree, int *ans)
{
	if (!tree || !ans)
		return;

	if ((tree->left && !tree->right) || (!tree->left && tree->right))
	{
		*ans = 0;
		return;
	}

	is_full(tree->left, ans);
	is_full(tree->right, ans);
}

/**
* binary_tree_is_full - Checks if binary is full
* @tree: Pointer to tree root
* Return: Integer
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int ans = 1;

	if (!tree)
		return (0);

	is_full(tree, &ans);

	return (ans); 
}

