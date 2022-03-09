#ifndef TREE_TRAVERSEL_H_
#define TREE_TRAVERSEL_H_

typedef enum DepthFirstSearchTypes
{
	DFS_PRE_ORDER_NLR = 0U,
	DFS_POST_ORDER_LRN = 1,
	DFS_IN_ORDER_LNR = 2,
	DFS_REVERSE_PRE_ORDER_NRL = 3,
	DFS_REVERSE_POST_ORDER_RLN = 4,
	DFS_REVERSE_IN_ORDER_RNL = 5,
};

void BinaryTreeTraversalDFS();
#endif