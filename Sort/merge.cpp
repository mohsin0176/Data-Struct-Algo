
void merge(int src[],int length,int start,int mid,int end)
{
    int temp[length];
    int left=start;
    int tmpIndex=start;
    int index=start;
    while(left<=mid&&right<=end)
    {
        if(src[left]<=src[right])
        {
            temp[tmpIndex++]=src[left++];
        }
        else
        {
            temp[tmpIndex++]=src[right++];
        }
    }
    while(left<=mid)
    {
        temp[tmpIndex++]=src[left++];
    }
    while(right<=end)
    {
        temp[tmpIndex++]=src[right++];
    }
    while(index<=end)
    {
        src[index]=temp[index];
        index++;
    }
}
void mergeSort(int src[],int length)
{
    int len=1;
    int low=0;
    int mid;
    int high;
    while(len<=length)
    {
        for(int i=0;i+len<=length-1;i+=len*2)
        {
            low=i;
            mid=i+len-1;
            high=i+len*2-1;
            if(high>length-1)
            {
                high=length-1;
            }
            merge(src,length,low,mid,high);
        }
        len=2*len;
    }
}
