#include "binary_trees.h"

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: returns the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	size_t lh, rh;

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lh >= rh)
		return (lh + 1);
	return (rh + 1);
}
