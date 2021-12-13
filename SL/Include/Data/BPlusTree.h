#ifndef BPLUSTREE_H_
#define BPLUSTHREE_H_

#include "Definitions/Types.h"

typedef struct BPlusTree
{
    uint32_t maxDegree;
} BPlusTree;

void BPTCreate(BPlusTree* tree, const u32 maxDegree);
void BPTInsert(BPlusTree* tree, void* data);
void BPTDelete(BPlusTree* tree, u32 key);

#endif
