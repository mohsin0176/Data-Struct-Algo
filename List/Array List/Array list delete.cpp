
template <typename T>
void ArrayList<T>::remove(int index)
{
    if(index<length)
    {
        for(int i=index;i<length-1;i++)
        {
            datas[i]=datas[i+1];
        }
        datas[length-1]=NULL;
        length--
    }
}
