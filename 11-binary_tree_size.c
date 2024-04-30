#include "binary_trees.h"
/**
 * binary_tree_size- measures the size of a tree
 * @tree: pointer to the root node of the tree to measure the size
 * If tree is NULL, the function must return 0
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize;

	if (tree == NULL)
		return (0);
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}
