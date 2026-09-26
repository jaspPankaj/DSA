void MoveZeroToEnd(vector<int>& ar)
{
    int index=0;
    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i]!=0)
        {
            ar[index]=ar[i];
            index++;
        }

    }
    while (index<ar.size())
    {
        ar[index]=0;
        index++;
    }

    readArray(ar);
    
}


int main()
{
   vector<int> ar = {0, 1, 0 ,3 ,12};
   readArray(ar);
   MoveZeroToEnd(ar);
   
    
    return 0;
}   