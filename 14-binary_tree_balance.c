#include "binary_trees.h"
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

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left); /* height for the left */
	right_h = binary_tree_height(tree->right); /* height for the right */

	return ((left_h > right_h ? left_h : right_h) + 1);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
