#include "binary_trees.h"

/**
* binary_tree_levelorder - Traverses a binary tree using level-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node's value
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[10000];
	int front = 0;
	int rear = 0;

	if (!tree || !func)
		return;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}
}
