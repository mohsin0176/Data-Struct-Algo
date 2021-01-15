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
public void insert(Elem data,int index)
{
    if(index<0||data==null)
    {
        throw newNullPointerException("index<0||data==null");
    }
    Node p=header;
    int i=0;
    while(i<index&&p.next!=null)
    {
        p=p.next;
        i++;
    }
    if(p==null)
    {
        throw new IndexOutOfBoundsException("Index Out of bounds");
    }
    Node s=new Node();
    s.data=data;
    s.next=p.next;
    p.next=s;
}
