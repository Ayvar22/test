/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long long n, a[100], i,r=0,k=0,eo;
    cin >>n ;
    for(i=0;i<n;i++){
        cin>> a[i];
        r += a[i];
    }
    if(r>0|| r%n==0)
        eo= r/n;
    else
        eo=r/n -1;
    for (i=0;i<n;i++){
        if(a[i] > eo)
            k++;
        else
            r -= a[i];
    }
    cout << r << " " << k;
}
