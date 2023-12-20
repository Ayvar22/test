/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int array[1000];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }
    for(int i =0; i<n; i++){
        if(array[i]>0 && array[i+1]>0 or array[i]<0 && array[i+1]<0){
            cout<< array[i]<<" "<< array[i+1]<<endl;
        }
    }

    return 0;
}
