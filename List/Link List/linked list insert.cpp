template <typename T>
void LinkedList<T>::insert(T data,int index)
{
    if(index<0)
    {
        cout<<"index<0"<<endl;
    }
    int temp=0;
    Node<T>*pNode=header;
    while(temp<index&&pNode->next!=nullptr)
    {
        pNode=pNode->next;
        temp++;
    }
    if(pNode==nullptr)
    {
        cout<<"index out of bounds!"<<endl;
        return;
    }
    Node<T>*s=new Node<T>();
    s->data=data;
    s->next=pNode->next;
    pNode->next=s;
}
