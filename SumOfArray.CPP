Find the sum of the elements of the given array .

#include<iostream>
using namespace std;

void simpleArraySum(int ar[1000])
{
    int i,sum=0,n;
    
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
    
    simpleArraySum(ar);
    
    return 0;
}

///////// OUTPUT 

Input (stdin)
6
1 2 3 4 10 11
Expected Output
31
