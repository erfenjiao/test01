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

//�������Ĵ���
typedef BinaryTreeNode* BT_Node;

//����
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

//�������
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

//�������
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

//�ڵ����
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