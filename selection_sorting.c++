
#include<iostream>
#include<limits>
  using namespace std;
    int selection_sort(int brr[],int length){
       for(int i=0;i<length;i++){
        int check_element=INT32_MAX;
        int check_index=-1;
          for(int j=i;j<length;j++){
            if(check_element>brr[j]){
                check_element=brr[j];
                check_index=j;
            }
          }
          brr[check_index]=brr[i];
          brr[i]=check_element;
       }
          for(int i=0;i<length;i++){
           cout<<brr[i]<<" ";
         }
        return 0;
    }
     
   int main(){
      int size;
       cout<<"enter the size of array: ";
        cin>>size;
        int arr[size];
         for(int i=0;i<size;i++){
            cout<<"enter the element of position "<< i+1 <<" in the array: ";
            cin>>arr[i];
         }
        
         selection_sort(arr,size);
    return 0;
   }