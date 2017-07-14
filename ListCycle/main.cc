/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
map<ListNode*, int> sectime;
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A == NULL) return NULL;
    ListNode *f, *s;
    s = f = A;
    int index = 0; bool cycle=0;
    while(f != NULL && f->next != NULL){
        f = f->next->next;
        s = s->next;
        if(s == f){ cycle = 1; break; }
    }
    if(cycle == 0) return NULL;
    else{
        f = A;
        while(f!=s){
            f = f->next;
            s = s->next;
        }
        return f;
    }
}

