ListNode* deleteDuplicates(ListNode* head)
{
    ListNode* temp = head;

    if(temp)
    {
        while(temp and temp->next)
        {
            if(temp->val == temp->next->val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
    }

    return head;
}
