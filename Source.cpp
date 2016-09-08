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
	ListNode* reverseList(ListNode* head) {
		if (!head || !head->next)
		{
			return head;
		}

		ListNode* nxtNode = head->next;
		ListNode*  prev = NULL;
		while (nxtNode)
		{
			head->next = prev;
			prev = head;
			head = nxtNode;
			nxtNode = head->next;
		}

		head->next = prev;

		return head;
	}

	ListNode* AddNewNode(ListNode* head, int newNodeVal)
	{
		ListNode* newNode = new ListNode(newNodeVal);
		if (!head)
		{
			head = newNode;
		}
		else
		{
			ListNode* curr = head;
			while (curr->next)
			{
				curr = curr->next;
			}

			curr->next = newNode;
		}

		return head;
	}

	void DeleteList(ListNode* head)
	{
		if (head)
		{
			ListNode* curr;
			while (head)
			{
				curr = head;
				head = head->next;
				delete curr;
			}
		}
	}

	void PrintLinkedList(ListNode* head)
	{
		ListNode* curr = head;
		while (curr)
		{
			cout << curr->val << " ";
			curr = curr->next;
		}
	}
};

int main()
{
	Solution s;
	ListNode* head = NULL;
	/*ListNode* head = s.AddNewNode(NULL, 1);
	head = s.AddNewNode(head, 2);
	head = s.AddNewNode(head, 3);
	head = s.AddNewNode(head, 4);*/
	cout << "Printing Before Reversing" << endl;
	s.PrintLinkedList(head);

	head = s.reverseList(head);
	cout << endl << "Printing After Reversing" << endl;
	s.PrintLinkedList(head);
	s.DeleteList(head);
	return 0;
}
