#include "binary_trees.h"

/**
 * binary_tree_is_full- CHecks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 0 tree is NULL or tree is not full else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l != r)
		return (0);
	return (1);
}
