#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp, *curr;

	tmp = tree;
	if (tree)
	{
		while (tmp)
		{
			if (tmp->left)
			{
				tmp = tmp->left;
			}
			else if (tmp->right)
			{
				tmp = tmp->right;
			}
			else if (tmp->parent)
			{
				curr = tmp;
				tmp = tmp->parent;
				if (tmp->left == NULL)
					tmp->right = NULL;
				tmp->left = NULL;
				free(curr);
			}
			else
			{
				free(tmp);
				break;
			}
		}
	}
}
