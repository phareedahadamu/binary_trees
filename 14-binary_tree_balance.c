#include "binary_trees.h"

/**
 * tree_height - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		l = 1 + tree_height(tree->left);
	else
		l = 1;
	if (tree->right)
		r = 1 + tree_height(tree->right);
	else
		r = 1;
	if (l > r)
		return (l);
	else
		return (r);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}
