template <typename T>
void LinkedList<T>::remove(int index)
{
    if(index<0)
    {
        cout<<"index<0"<<endl;
        return;
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
    pNode->next=pNode->next->next;
}
public void delete(int index)
{
    if(index<0)
    {
        throw new IllegalStateException("index<0");
    }
    NOde p=header;
    int i=0;
    while(i<=index && p !=null)
    {
        p=p.next;
        i++;
    }
    if(p==null)
    {
        throw new IndexOutBoundsException("index out of bounds");
    }
    p.next=p.next.next;
}
