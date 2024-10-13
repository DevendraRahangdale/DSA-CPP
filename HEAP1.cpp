#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int capacity;
    int size;



    Heap(int  capacity){
       this-> arr=new int[capacity];
       this->capacity=capacity;
       this-> size=0;
    }

void insert(int val){
    // size increase ++
    if(size==capacity){
        cout<<"Heap overflow "<<endl;
        return ;
    }
    // size increase ho jayenga
    size++;
    int index=size;
    arr[index]=val;

    // take the value to its correct position

    while(index > 1 ){
        int parentindex=index/2;

        if(arr[index]>arr[parentindex]){
            swap(arr[index],arr[parentindex]);
            index=parentindex;
        }
        else{
            break;
        }
    }

}

void printheap(){
    for(int i=1;i<=size;i++){
    cout<< arr[i]<<" ";
}
}


int deleteFromHeap() {
    int ans=arr[1];
    // replacement krni hai
    arr[1]=arr[size];
// last element ko  delete kr do uski last position se
size--;
int index=1;
while(index < size){
    int leftindex=2*index;
    int rightindex=2*index+1;

    // find out krna hai sabse bda kon
    int largestkaindex=index;
    // check kro leftchild ko
    if(leftindex <=size && arr[largestkaindex]<arr[leftindex] ){
        largestkaindex=leftindex;
    }

    if(rightindex <= size && arr[largestkaindex] < arr[rightindex]){
        largestkaindex=rightindex;
    }

    // no change
    if(index==largestkaindex){
        break;
    }
    else{
        swap(arr[index],arr[largestkaindex]);
        index=largestkaindex;
    }
}
return ans;
}

};


void heapify(int *arr,int n,int index){
    int leftindex=2*index;
    int rightindex=2*index+1;

    int largestkaindex=index;
    // tino mese max lao
    if(leftindex <= n && arr[largestkaindex] < arr[leftindex]){
        largestkaindex=leftindex;
    }
    if(rightindex <= n && arr[largestkaindex] < arr[rightindex]){
        largestkaindex=rightindex;
    }
    // after this two condition the largest ka index will be point onn the largest element amoong 3
    if(index != largestkaindex){
        swap(arr[index],arr[largestkaindex]);
        // ab recursion dekh lenga
        index=largestkaindex;
        heapify(arr,n,index);
    }
}


void buildheap(int arr[],int n){
    for(int i=n/2;i> 0;i--){
        heapify(arr,n,i);
    }
}


void heapsort(int arr[], int n){
    while( n !=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}



int main(){

    int arr[]={-1,5,10,15,20,25,12};
    buildheap(arr,6);
    cout<<"printing heap"<<endl;
   for(int i=1;i<=6;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   heapsort(arr,6);

   cout<<"printing heap sort"<<endl;
   for(int i=1;i<=6;i++){
    cout<<arr[i]<<" ";
   }

// Heap h(20);

// h.insert(10);
// h.insert(20);
// h.insert(5);
// h.insert(11);
// h.insert(6);

// cout<<"prinnting the conntent of the heap"<<endl;
// h.printheap();
// int ans=h.deleteFromHeap();

// cout<<endl;


// cout<<"Answer: "<<ans<<" ";
// cout<<endl;
// cout<<"printing the content of heap"<<endl;
// h.printheap();
}