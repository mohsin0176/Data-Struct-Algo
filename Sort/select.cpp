
void selectionSort(int src[],int length)
{
    for(int i=0;i<length;i++)
    {
        int min=i;
        for(int j=i+1;j<length;j++)
        {
            if(src[min]>src[j])
            {
                min=j;
            }
        }
        if(min !=i)
        {
            swap(src,i,min);
        }
    }
}
