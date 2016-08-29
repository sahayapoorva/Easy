#include <iostream>

using namespace std;

// definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	void deleteNode(ListNode* node) {
		ListNode* temp = node;
		ListNode* temp2 = NULL;
		if (!node->next)
		{
			return;
		}
		else
		{
			while (temp->next)
			{
				temp->val = temp->next->val;
				
				if (!temp->next->next)
				{
					temp2 = temp->next;
					temp->next = NULL;
				}
				else 
				{
					temp = temp->next;
				}
			}

			delete temp2;
		}
	}

	void addNode(ListNode* node, int a)
	{
		if (!node)
		{
			node = new ListNode(a);
		}
		else
		{
			ListNode* temp = node;
			ListNode* newNode = new ListNode(a);
			while (temp)
			{
				if (!temp->next)
				{
					break;
				}

				temp = temp->next;
			}

			temp->next = newNode;
		}
	}

	void DeleteLL(ListNode* node)
	{
		ListNode* temp = node;

		while (temp->next)
		{
			node = temp->next;
			delete temp;
			temp = node;
		}

		delete node;
	}
};

int main()
{
	ListNode* node = new ListNode(1);
	Solution s;
	s.addNode(node, 2);
	s.addNode(node, 3);
	s.addNode(node, 4);

	s.deleteNode(node);
	s.DeleteLL(node);

	return 0;
}