#include "binary_trees.h"

/**
 * binary_tree_depth - Gets depth of node in a binary tree
 * @tree: Pointer to tree node
 * Return: Integer
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !tree->parent)
		return (depth);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

