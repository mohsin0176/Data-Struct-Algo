
template <typename T>
void ArrayList<T>::insert(T e,int index)
{
    if(length<MAX_LENGTH && index<=length)
    {
        for(int i=length;i>index;i--)
        {
            datas[i]=datas[i-1];

        }
        datas[index]=e;
        length++;
    }
}

