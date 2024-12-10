#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: node checked
* Return: 0 if node == NULL or not a leaf, 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: check tree
 * Return: 1 if full and 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left_tree = binary_tree_is_full(tree->left);
	right_tree = binary_tree_is_full(tree->right);

	if (left_tree == 0 || right_tree == 0)
		return (0);
	/* it works too :) */
	/* if (left_tree == right_tree)
		return(1); */

	return (1);
}
