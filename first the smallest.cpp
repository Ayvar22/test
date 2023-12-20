/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int arr[100];
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    int min=100;
    int minnum;
    for(int i = 0; i<a;i++){
        if(min>arr[i]){
            min=arr[i];
            minnum=i;
        }
    }
    int swap;
    swap=arr[minnum];
    arr[minnum] = arr[0];
    arr[0] = swap;
    for(int i=0; i <a ; i++)
        cout << arr[i] << " ";
    
}
