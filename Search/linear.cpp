int linearSearch(int src[],int length,int key)
{
    for(int i=0;i<length;i++)
    {
        if(src[i]==key)
        {
            cout<<"Found Key"<<endl;
            return i;
        }
    }
            cout<<"Found No Key"<<endl;
            return 0;

}
