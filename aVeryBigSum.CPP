CPP Program to find the sum that is not in the range of the int. 

#include<iostream>
using namespace std;

void aVeryBigSum(int ar[1000])
{
    int n,i;
    
    long sum=0;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        
        sum=sum+ar[i];
    }
    
    cout<<sum;
    
}

int main()
{
    int ar[1000];
    
    aVeryBigSum(ar);
    
    return 0;
}

/////////////// OUTPUT 

Input (stdin)
5
1000000001 1000000002 1000000003 1000000004 1000000005
Expected Output
5000000015
