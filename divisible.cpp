/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,k;
    cin >> a >> k;
    int arr[101];
    for(int i = 0; i < a ; i++){
        cin >> arr[i];
    }
    int num = 0;
    for(int i = 0;i<a;i++){
        for(int j = i+1;j<a;j++){
            if((arr[i] + arr[j]) % k ==0){
                num++;
            }
        }
    }
    cout << num;
}
