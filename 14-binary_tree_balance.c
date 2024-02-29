#include "binary_trees.h"

/**
 * btheight - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL otherwise the height of the tree
 */

size_t btheight(const binary_tree_t *tree)
{
	size_t height_1, height_2;

	if (!tree)
		return (0);

	height_1 = btheight(tree->left);
	height_2 = btheight(tree->right);

	/**
	 * note: I changed the return value from 0 to
	 * 1 making it different from existing
	 * height count function
	 */
	if (!tree->left && !tree->right)
		return (1);
	if (height_1 > height_2)
		return (height_1 + 1);
	else
		return (height_2 + 1);

}

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL otherwise balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_1, height_2;

	if (!tree)
		return (0);

	height_1 = btheight(tree->left);
	height_2 = btheight(tree->right);

	return (height_1 - height_2);
}
