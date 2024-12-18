#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: nodes with 1 or 2 children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return(1 + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));

	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
