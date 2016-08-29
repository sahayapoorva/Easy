#include <iostream>

using namespace std;

/**
* Definition for a binary tree node.
*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if ((p && !q) || (q && !p))
		{
			return false;
		}
		else if (!p && !q)
		{
			return true;
		}
		else if (p->val != q->val)
		{
			return false;
		}
		else if ((p->left && !(q->left)) || (!(p->left) && q->left))
		{
			return false;
		}
		else if ((p->right && !(q->right)) || (!(p->right) && q->right))
		{
			return false;
		}
		else if (!isSameTree(p->left, q->left))
		{
			return false;
		}
		else if(!isSameTree(p->right,q->right))
		{
			return false;
		}

		return true;
	}

	/*Add node to the tree*/
	void addnode(TreeNode* root, int value)
	{
		if (!root)
		{
			root = new TreeNode(value);
		}
		else
		{
			if (root->val > value)
			{
				if (root->right)
				{
					addnode(root->right, value);
				}
				else
				{
					root->right = new TreeNode(value);
				}
			}
			else
			{
				if (root->left)
				{
					addnode(root->left, value);
				}
				else
				{
					root->left = new TreeNode(value);
				}
			}
		}
	}

	/*Gelete Tree*/
	void deleteTree(TreeNode* root)
	{
		if (root->left)
		{
			deleteTree(root->left);
			root->left = NULL;
		}

		if (root->right)
		{
			deleteTree(root->right);
			root->right = NULL;
		}

		if (!(root->left) && !(root->right))
		{
			delete root;
			return;
		}
	}
};

int main()
{
	TreeNode* root1 = new TreeNode(10);
	Solution s1;
	s1.addnode(root1, 12);
	s1.addnode(root1, 3);
	s1.addnode(root1, 45);

	TreeNode* root2 = new TreeNode(10);
	s1.addnode(root2, 12);
	s1.addnode(root2, 3);
	s1.addnode(root2, 45);

	cout<<s1.isSameTree(root1, root2);
	s1.deleteTree(root1);
	s1.deleteTree(root2);
	return 0;
}