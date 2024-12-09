#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: the root node of the tree
 * Return: measure the depth of the tree or 0 if fail
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return(0);

    /* Traverse upwards towards the root, incrementing the depth. */
    while (tree && tree->parent)
    {
        tree = tree->parent;
        depth++;
    }

    return depth;

}