#include "binary_trees.h"

/**
* insert - Inserts node into bst
* @tree: Pointer to binary tree root
* @value: Value to insert
* @dub: Indicates if there is value duplicate
* Return: Void
*/
void insert(bst_t **tree, binary_tree_t *value, int *dup)
{
	if (!(*tree) || !value || *dup)
		return;

	if ((*tree)->n == value->n)
	{
		*dup = 1;
		return;
	}

	if ((*tree)->n > value->n)
	{
		if(!(*tree)->left)
		{
			value->parent = *tree;
			(*tree)->left = value;
			return;
		}

		insert(&(*tree)->left, value, dup);
		return;
	}
	
	if(!(*tree)->right)
	{
		value->parent = *tree;
		(*tree)->right = value;
		return;
	}

	insert(&(*tree)->right, value, dup);
}

/**
* bst_insert - Inserts value into binary search tree
* @tree: Binary tree root
* @value: Value to insert
* Return: Pointer to new node 
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *node = binary_tree_node(NULL, value);
	int dup = 0;

	if (!tree)
	{
		*tree = node;
		return node;
	}

	insert(tree, node, &dup);

	if (dup)
	{
		free(node);
		return (NULL);
	}

	return (node);
}
