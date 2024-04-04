#include<iostream>
using namespace std;
int main(){
    int x;
    int sum;
    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout<<"Type a number: ",
        cin>>x;
        sum += x;
        cout<<"Totals is : " << sum;
    }
    
    return 0;
}