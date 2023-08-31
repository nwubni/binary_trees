#include "binary_trees.h"

/**
* binary_tree_is_complete - Checks for tree's completeness
* @tree: Pointer to the root node of the tree to traverse
* Return: Integer
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[10000];
	int front = 0;
	int rear = 0;
	int half_full = 0;

	if (!tree)
		return (0);

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		half_full += (current->left && !current->right) ||
				(!current->left && current->right);

		if ((!current->left && current->right) || half_full > 1)
			return (0);

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}

	return (1);
}
