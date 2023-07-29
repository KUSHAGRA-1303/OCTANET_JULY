#include<iostream>
using namespace std;

int main(){
cout<<"enter the size of array"<<endl;
int n;
cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
           if(arr[i]==arr[j]){
            count++;
           }
          
        }
        
     if(count==1)
    cout<<arr[i];
    }
            
    

    return 0;
}
