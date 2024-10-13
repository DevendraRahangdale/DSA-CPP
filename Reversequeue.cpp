#include<iostream>
#include<stack>
#include<queue>
using namespace std;


// void reversequeue(queue<int>&q){
//     // one by one queue se element lo and stack me dalo

// stack<int>st;
//     while(!q.empty()){
//         int frontelement=q.front();
//         q.pop();

// st.push(frontelement);
//     }
//     // one by one stack se lo and queue me push kr do
//     while(!st.empty()){
//         int topelement=st.top();
//         st.pop();
//         q.push(topelement);
//     }

// }

//********************************************************************************************************* */

// reverse k element in queue
//  void reversefirstkelement(queue<int>&q,int k){
    
//     stack<int>st;
//     int n=q.size();
// //push first k element int stack

// for(int i=0;i<k;i++){
//    int temp=q.front();
//    q.pop();
//    st.push(temp); 
// }
// // pop k element int queue
// while(!st.empty()){
//     int temp=st.top();
//     st.pop();
//     q.push(temp);
// }


// // n-k element first pop then push  into the stack34
// for(int i=0;i<(n-k);i++){
//     int temp=q.front();
//     q.pop();
//     q.push(temp);

// }

//************************************************************************************************************** */
// void interleavequeue(queue<int>&first){
// queue<int>second;
// // push first half of first queue in seconnd queue

// int n= first.size();
// for(int i=0;i<n/2;i++){
//     int temp=first.front();
//     first.pop();
//     second.push(temp);
// }
// // merge the both the half/

// //into the first q
// for(int i=0;i<n/2;i++){
//     int temp=second.front();
//     second.pop();
//     first.push(temp);

//     temp=first.front();
//     first.pop();
//     first.push(temp);

    
// }

// }
//************************************************************************************************* */
// first -ve integer in every k window
void PintFirstNeg(int *arr, int n, int k = 3)
{
    deque<int> dq;
    // process first k elements
    for (int i = 0; i < k; i++)
    {
        int ele = arr[i];
        if (ele < 0)
            dq.push_back(i);
    }
    // print ans

    // process remaining window
    //  ->removal and addition
    for (int i = k; i < n; i++)
    {
        if (dq.empty())
            cout << "0" << endl;
        else
        {
            cout << arr[dq.front()] << " ";
        }
        // purani window ka ans->
        // cout << arr[dq.front()] << " ";
        // removal
        // out of range index ko q mai se remove krdo

        if (i - dq.front() >= k)
            dq.pop_front();

        // addition
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // last window ka alag se process kro
    if (dq.empty())
        cout << "0" << endl;
    else
    {
        cout << arr[dq.front()] << " ";
    }
    cout << endl;
}
int main()
{
    // reverse a queue
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    // reverseQueue(q);
    // reverseQueueRec(q);
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // reverse k element
    // reverseKEle(q, 3);
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // interleave first and second half of queue
    // interleaveQueue(q);
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // sliding window
    int arr[7] = {2, -5, 4, -1, -2, 0, 5};
    int n = 7;
    int k = 3;
    PintFirstNeg(arr, n, k);
    return 0;
}