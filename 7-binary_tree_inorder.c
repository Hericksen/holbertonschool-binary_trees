#include "binary_trees.h"
/** */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL) /* if NULL, do nothing and return */
		return;

	binary_tree_inorder(tree->left, func); /* recursive left to right */
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
