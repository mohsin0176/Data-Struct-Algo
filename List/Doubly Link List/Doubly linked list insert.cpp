template<typename T>
void DoublyLinkedList<T>::insert(T data,int index)
{
    if(index<0)
    {
        cout<<"index<0"<<endl;
        return ;
    }
    int temp;
    Node<T>*pNode=header;
    while(temp<index && pNode->next != nullptr)
    {
        pNode=pNode->next;
        temp++;
    }
    if(pNode==nullptr)
    {
        cout<<"index out of bounds"<<endl;
        return;
    }
    Node<T>*s=new Node<T>();
    s->data=data;
    s->prev=pNode;
    s->next=pNode->next;
    if(pNode->next !=nullptr)
    {
        pNode->next->prev=s;
    }
    pNode->next=s;
}
