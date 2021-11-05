#include<iostream>
#include<Stack>
#include<queue>

using namespace std;

struct BinaryTreeNode
{
	char data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode() :left(NULL), right(NULL)
	{

	}
};

//二叉树的创建
typedef BinaryTreeNode* BT_Node;

//创建
BT_Node Create()
{
	BT_Node root = new BinaryTreeNode();
	char v;
	cin >> v;

	if (v != '#')
	{
		root->data  = v;
		root->left  = Create();
		root->right = Create();
	}
	else
	{
		root = NULL;
	}
	return root;
}

//中序遍历
void Mid(BT_Node root)
{
	if (root == NULL)
	{
		return;
	}
	Mid(root->left);
	cout << root->data;
	Mid(root->right);
}

//层序遍历
void Level(BT_Node root)
{
	queue<BT_Node> q;
	q.push(root);

	while (!q.empty())
	{
		BT_Node op = q.front();
		q.pop();
		cout << op->data;
		if (op->left != NULL)
		{
			q.push(op->left);
		}
		if (op->right != NULL)
		{
			q.push(op->right);
		}
	}
}

//节点个数
int Num(BT_Node root)
{
	if (root == NULL)
	{
		return 0;
	}

	return Num(root->left) + Num(root->right) + 1;
}

int main()
{
	BT_Node b;
	b = Create();
	cout << Num(b);
}