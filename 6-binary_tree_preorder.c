#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using pre-order
 * @tree: pointer to root of node of tree to traverse
 * @func: pointer to a function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
