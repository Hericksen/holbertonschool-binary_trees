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
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: hauteur a calculer
 * Return: height of the tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left_h = binary_tree_height(tree->left); /* height for the left */
	right_h = binary_tree_height(tree->right); /* height for the right */

	return ((left_h > right_h ? left_h : right_h) + 1);
}
