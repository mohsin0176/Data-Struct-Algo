template<typename T>
void DoublyLinkedList<T>::remove(int index)
{
    if(index<0)
    {
        cout<<"index<0"<<endl;
        return ;
    }
    int temp=0;
    Node<T>*pNode=header;
    while(temp<index)
    {
        pNode=pNode->next;
        temp++;
    }
    if(pNode==nullptr)
    {
        cout<<"index out of bounds"<<endl;
        return;
    }
    pNode->prev->next=pNode->next;
    if(pNode->next!=nullptr)
    {
        pNode->next->prev=pNode->prev;
    }
}
