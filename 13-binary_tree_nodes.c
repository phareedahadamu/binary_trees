#include "binary_trees.h"

/**
 * binary_tree_nodes- counts nodes with at least 1 child  a binary tree
 * @tree: pointer to the root node of the tree
 * Return: The count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lcount, rcount;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lcount = binary_tree_nodes(tree->left);
	rcount = binary_tree_nodes(tree->right);
	return (lcount + rcount + 1);
}
