#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	heap_t *tree;
	int array[] = {
		98, 110, 43, 56, 2, 78, 123, 76, 234
	};
	size_t n = sizeof(array) / sizeof(array[0]);
	int extract;

	tree = array_to_heap(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);
	binary_tree_delete(tree);
	return (0);
}
