Node* reverse_DLL(Node* head){
    if(head == nullptr) return nullptr;

    Node* temp = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    // Fix head
    if(temp != nullptr)
        head = temp->prev;

    return head;
}
