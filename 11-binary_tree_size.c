#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of tree to measure size
 * Return: 0 if tree is NULL, otherwise size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h1, h2;

	if (!tree)
		return (0);

	h1 = binary_tree_size(tree->left);
	h2 = binary_tree_size(tree->right);

	return (h1 + h2 + 1);
}
