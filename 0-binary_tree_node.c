#include "binary_trees.h"
/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: This points to parent binary tree
 * @value: This value new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);
	if (value == '\0')
		return (NULL);
	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = parent;

	return (tmp);
}
