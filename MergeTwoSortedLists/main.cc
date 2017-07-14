/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A == NULL) return B;
    else if(B == NULL) return A;
    else if(A->val <= B->val){
        A->next = mergeTwoLists(A->next, B);
    }
    else{
        ListNode *temp = B;
        B = B->next;
        temp->next = A;
        A = temp;
        A->next = mergeTwoLists(A->next, B);
    }
    return A;
}
