#include "binary_trees.h"

/**
 * binary_tree_depth-  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: The depth
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	tmp = tree->parent;
	depth++;
	while (tmp->parent != NULL)
	{
		tmp = tmp->parent;
		depth++;
	}
	return (depth);
}
