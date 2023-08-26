PROBLEM - 
You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. 
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.


//// PROGRAM 
#include <iostream>

using namespace std;

int main() {
    
    int n, maks = 0, kolko, x;
    
    cin >> n;
    
    for( int i=0; i<n; i++ ) {
        cin >> x;
        
        if( x > maks ) {
            maks = x; 
            kolko = 1;
        }
        else if( x == maks )
            kolko++;
    }
    
    cout << kolko;
    
    
    return 0;
}
