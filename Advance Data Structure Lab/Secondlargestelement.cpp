#include <iostream>
using namespace std;

int main() {
    int arr1[] ={1, 9, 5, 21, 11};

    int largest = arr1[0];
    
    for(int i=0; i<5;i++){
        if(arr1[i]>largest){
            
            largest=arr1[i];
        }
    }
    int Secondlargest=arr1[0];
    for(int i=0;i<5;i++){ 
        if(arr1[i]>Secondlargest&&arr1[i]!=largest){
                Secondlargest= arr1[i];
    }
     }    
    cout<<"largest element:"<<largest<<endl;
    cout<<"Secondlargest element:"<<Secondlargest<<endl;
    


}