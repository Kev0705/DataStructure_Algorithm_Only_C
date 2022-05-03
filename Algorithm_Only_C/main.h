#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct tagNode
{
	int Data;
	struct tagNode* NextNode;
}Node;

Node* SLL_CreateNode(int NewData);