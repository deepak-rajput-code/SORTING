 #include<iostream>
  using namespace std;
   int bubble_function(int arr[],int);
    int main(){
      int size;
      cout<<"enter the number of element in array: ";
      cin>>size;
         int arr[size];
          for(int i=0;i<size;i++){
            cout<<"enter the element of position "<<i+1<<" :";
            cin>>arr[i];
          }

          cout<<endl<<"the entered array is :"<<endl;
         for(int i=0;i<size;i++){
            cout<<arr[i]<<" "; 
          }
           bubble_function(arr,size);
      return 0;
    }
        int bubble_function(int brr[],int length){
            //sorting process of array
             for(int i=0;i<length;i++){
              for(int j=0;j<length;j++){
                if(brr[j]>brr[j+1]){
                   int temp;
                   temp=brr[j];
                   brr[j]=brr[j+1];
                   brr[j+1]=temp;
                }
              }
             }
               cout<<endl<<"the sorted array is :"<<endl;
         for(int i=0;i<length;i++){
            cout<<brr[i]<<" "; 
          }
          return 0;
        }
     