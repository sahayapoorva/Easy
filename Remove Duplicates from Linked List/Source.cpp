#include <iostream>

using namespace std;

/**
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* curr = head;
		ListNode* nextNode = NULL;
		while (curr && curr->next)
		{
			nextNode = curr->next;
			while (nextNode && nextNode->val == curr->val)
			{
				nextNode = nextNode->next;
			}

			curr->next = nextNode;
			curr = curr->next;
		}

		return head;
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
	s.addNode(node, 1);
	s.addNode(node, 2);
	s.addNode(node, 2);

	s.deleteDuplicates(node);
	s.DeleteLL(node);
	return 0;
}