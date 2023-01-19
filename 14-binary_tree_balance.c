#include "binary_trees.h"

size_t binary_tree_height_2(const binary_tree_t *tree);

/**
 * aux_binary_tree_height - measures the height of a binary tree including root
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of tree, or 0 if tree is NULL
 */

int aux_binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);

	height_left = aux_binary_tree_height(tree->left);
	height_right = aux_binary_tree_height(tree->right);

	return (1 + (height_left >= height_right ? height_left : height_right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (aux_binary_tree_height(tree->left) -
			aux_binary_tree_height(tree->right));
}
