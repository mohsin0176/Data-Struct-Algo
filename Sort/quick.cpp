int partArr(int src[],int low,int high)
{
    int pivot=src[low];
    while(low<high)
    {
        while(low<high&&src[high]>=pivot)
        {
            high--;
        }
        swap(src,low,high);
        while(low<high&&src[low]<=pivot)
        {
            low++;
        }
        swap(src,low,high);
    }
    return low;
}
void qSort(int src[],int low,int high)
{
    int pivot;
    if(low<=high)
    {
        pivot=partArr(src,low,high);
        qSort(src,low,pivot-1);
        qSort(src,pivot+1,high);

    }
}
void quickSort(int src[],int length)
{
    qSort(src,0,length-1);
}
