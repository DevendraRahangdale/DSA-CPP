

// #include<iostream>
// using namespace  std;

// void selectionsort(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){

       
//         if (a[i]>a[j]){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
            
//         }
//     }
// }
//  }

// void printarray(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int a[]={5,4,3,2,1};
//     int n=5;

//     selectionsort(a,n);
//     printarray(a,n);

    
// }


#include<iostream>
using namespace std;
int findReturn(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        
        {
            if(arr[i]+arr[i+1]==target)
            {
                // return(i,j);
                cout<<i<<" "<<i+1;
            }
        }
    }
    
}
int main()
{
    int arr[]={2,7,11,15};
    int n=4;
    int target=18;
    findReturn(arr,n,target);
 return 0;
}