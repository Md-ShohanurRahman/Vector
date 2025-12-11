#include <iostream>
using namespace std;

int main() {

int n ;

cout<<"enter the size of the array : ";
cin >>n;

int *arr =new int [n];
cout<<"enter the elements of the array : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The elements of the array : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}
