
int interpolationSearch(int src[],int length,int key)
{
    int low,mid,high;
    low=0;
    high=lenght-1;
    while(low<=high)
    {
        mid=low+(high-low)*(key-src[low])/(src[high]-src[low]);
        if(key<src[mid])
        {
            high=mid-1;
        }
        else if(key>src[mid])
        {
            low=mid+1;
        }
        else
        {
            cout<<"Key Found";
            return mid;
        }
    }
    cout<<"Not Found key"<<endl;
    return 0;
}
