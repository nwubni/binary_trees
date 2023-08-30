#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints preorder of tree
 * @tree: Pointer to tree root
 * @func: Function pointer
 * Return: Void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
