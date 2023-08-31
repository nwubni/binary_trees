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

/**
* binary_trees_ancestor - Finds  common ancestors of two nodes
* @first: First node
* @second: Second node
* Return: Pointer to common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	size_t f_depth = binary_tree_depth(first);
	size_t s_depth = binary_tree_depth(second);
	binary_tree_t *f_temp = (binary_tree_t *)first;
	binary_tree_t *s_temp = (binary_tree_t *)second;
	size_t temp;

	/* Let f_temp always be deeper */
	if (f_depth < s_depth)
	{
		f_temp = (binary_tree_t *)second;
		s_temp = (binary_tree_t *)first;
		temp = f_depth;
		f_depth = s_depth;
		s_depth = temp;
	}

	/* Bring the two nodes to the same depth */
	while (f_depth > s_depth)
	{
		f_temp = f_temp->parent;
		f_depth--;
	}

	/* Compare nodes while moving up ancestral tree */
	while (f_temp && s_temp)
	{
		if (f_temp == s_temp)
			return (f_temp);

		f_temp = f_temp->parent;
		s_temp = s_temp->parent;
	}

	return (NULL);
}
