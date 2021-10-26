bool detectLoop(Node* head)
{   
    if(head==NULL)
    return false;
    Node* tortoise=head;
    Node* hare=head;
    bool f=false;
    while(tortoise!=NULL&& hare!=NULL && hare->next!=NULL)
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
        if(hare==tortoise)
        {
            f=true;
            break;
        }
    }
    return f;
}
// Time - O(n)
// Space - O(1)