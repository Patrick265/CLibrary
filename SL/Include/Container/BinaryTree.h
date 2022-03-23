#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

#include <stddef.h>

#include "Definitions/Types.h"
#include "TreeStatusCodes.h"

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	void* content;
	i32 key;
} BinaryTreeNode;

typedef struct BinaryTree
{
	BinaryTreeNode* root;
	u32 depth;
	size_t size;
} BinaryTree;

TreeStatusCode BinaryTreeCreate(BinaryTree* tree);
TreeStatusCode BinaryTreeAppend(BinaryTree* tree, i32 key, void* content);
TreeStatusCode BinaryTreeShowContent(BinaryTree* tree);

#endif
