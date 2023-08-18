#include<iostream>
using namespace std;

void compareTriplets(int a[3],int b[3])
{
    int i;
    
    int aSum=0,bSum=0;
    
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            aSum=aSum+1;
        }
        
        else if(a[i]<b[i])
        {
            bSum=bSum+1;
        }
        
        else 
        {
        continue;
        }
    }
    
    cout<<aSum<<" "<<bSum<<endl;
    
}

int main()
{
    int a[3];int b[3];
    
    compareTriplets(a,b);
    
    return 0;
}


/////////////////// OUTPUT 

Input (stdin)
5 6 7
3 6 10
Expected Output
1 1
