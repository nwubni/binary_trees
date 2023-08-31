#include "binary_trees.h"

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node of the tree to check
* Return: 1 if the tree is complete, 0 otherwise
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[10000];
	int front = 0;
	int rear = 0;
	int null_encountered = 0;

	if (tree == NULL)
		return (0);

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		if (current == NULL)
		{
			null_encountered = 1;
			continue;
		}

		if (null_encountered && current != NULL)
			return (0);

		queue[rear++] = current->left;
		queue[rear++] = current->right;
	}

	return (1);
}

