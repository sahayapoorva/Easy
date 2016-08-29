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
		while (temp)
		{
			if (temp->val == 3 && temp->next)
			{

			}
		}
	}
};

int main()
{
	return 0;
}