void shellSort(int src[],int length)
{
    int step=length/2;
    while(step!=0)
    {
        for(int i=0;i<step;i++)
        {
            for(int j=i+step;j<length;j+=step)
            {
                int temp=src[j];
                int k;
                for(k=j-step;k>=0&&src[k]>temp;k-=step)
                {
                    src[k+step]=src[k];
                }
                src[k+step]=temp;
            }
        }
        step=step/2;
    }
}
