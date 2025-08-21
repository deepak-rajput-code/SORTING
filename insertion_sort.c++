#include<iostream>
 using namespace std;
  int main(){
     int size;
      cout<<"enter the size of an array: ";
      cin>>size;
       
      int arr[size];
       for(int i=0;i<size;i++){
        cout<<"enter the element of position "<<i+1<<" :";
        cin>>arr[i];
       }
      cout<<endl<<"the entered array is: "<<endl;
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       }

         for (int i=1;i<size;i++) {
        int number= arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>number) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=number;
    }
     cout<<endl<<"the sorted array is: "<<endl;
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       }
    return 0;
  }