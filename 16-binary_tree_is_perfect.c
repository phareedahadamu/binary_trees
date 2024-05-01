#include "binary_trees.h"

/**
 * find_depth- measures the depth of the left-most leaf of a tree
 * @tree: pointer to the trees root node
 * Return: The depth.
 */
int find_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 * isPerfect- Checks is a tree is perfect
 * @tree: pointer to the tree's root node
 * @depth: The depth of the tree
 * @level: The level of a node being checked
 * Return: true or false
 */
bool isPerfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (false);
	if (tree->left ==  NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (false);
	return (isPerfect(tree->left, depth, level + 1) && isPerfect(tree->right,
				depth, level + 1));
}
/**
 * binary_tree_is_perfect- Checks if a tree is perfect (main)
 * @tree: pointer to the tree's root node
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;
	bool check;

	d = find_depth(tree);
	check = isPerfect(tree, d, 0);
	return (check == true ? 1 : 0);
}
