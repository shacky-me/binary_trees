#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root
 * @node: pointer to a node to check
 * Return: return 1 if node is a root or 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
