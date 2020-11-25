#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Maxsize 100

struct tree {
	int data;
	struct tree* left;
	struct tree* right;
};

typedef struct queue
{
	struct tree* numQ[Maxsize];
	int front;
	int rear;
}Queue;

Queue Q;

void initilize()
{
	Q.front = 0;
	Q.rear = 0;
};

void Push(struct tree* root)
{
	Q.numQ[++Q.rear] = root;
}

struct tree* Pop()
{
	return Q.numQ[++Q.front];
}

int empty()
{
	return Q.rear == Q.front;
}

struct tree* creatTree(struct tree* root)
{
	int value=0;
	scanf("%d", value);
	if (value == -1)
		return NULL;
	root = (struct tree*)malloc(sizeof(struct tree));
	root->data = value;
	printf("Please enter %d's Left tree:", root->data);
	root->left = creatTree(root->left);
	printf("Please enter %d's Right tree:", root->data);
	root->right = creatTree(root->right);
	return root;
}

void LevelOrderTraversal(struct tree* root)
{
	struct tree* temp;
	Push(root);
	while (!empty())
	{
		temp = Pop();
		printf("%d", temp->data);
		if (temp->left)
			Push(temp->left);
		if (temp->right)
			Push(temp->right);
	}
}

int main()
{
	printf("Please enter the header:");
	struct tree* root = creatTree(root);
	initilize();
	LevelOrderTraversal(root);
	putchar('\n');
	return 0;
}