#include <iostream>
void pointer_notation(int arr[5],int size){
    std::cout<<"F";
}
int main(){
     int arr[] = {2,3,4,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
     pointer_notation(arr,n);
     return 0;
}