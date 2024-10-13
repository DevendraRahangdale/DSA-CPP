#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &st, int &position, int &ans)
{
    if (position == 1)
    {
        ans = st.top();
        return;
    }
    // 1 case ham solve karege usme kya tha

    position--;
    int temp = st.top();
    st.pop();
    // recursion call
    solve(st, position, ans);

    // backtracking
    st.push(temp);
}

int getmiddlelement(stack<int> &st)
{
    int size = st.size();
    if (st.empty())
    {

        return -1;
    }
    else
    {
        int position = 0;
        // stack is not empty
        if (size & 1)
        {
            // even vala case
            position = (size / 2) + 1;
        }
        else
        {
            // odd ka case
            position = (size / 2);
        }
        int ans = -1;
        solve(st, position, ans);
        return ans;
    }
}

void insertATbottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    // 1 case mai solve karunga

    int temp = st.top();
    st.pop();

    // recursion
    insertATbottom(st, element);

    // backtracking
    st.push(temp);
}

void reversestack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    // 1 case hum solve karenge
    int temp = st.top();
    st.pop();

    // recursion
    reversestack(st);

    // backtracking
    insertATbottom(st, temp);
}

void insertAtsortedStack(stack<int> &st, int element)
{
    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }
    // 1 case
    int temp = st.top();
    st.pop();

    // recursion dekh lenga
    insertAtsortedStack(st, element);

    // backtracking'

    st.push(temp);
}

void sortstack(stack<int> &st)
{
    // baswe case

    if (st.empty())
    {
        return;
    }

    // 1 case
    int temp = st.top();
    st.pop();

    // recursion
    sortstack(st);

    // backtracking
    insertAtsortedStack(st, temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(50);
    st.push(7);
    st.push(18);
    st.push(32);
    // st.push(40);
    // st.push(50);
    // st.push(60);

    // int element=400;
    // reversestack(st);
    //   insertAtsortedStack(st, 25);
    sortstack(st);
    // //    insertATbottom(st, element);
    // cout<<"with reverse:"<<endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    // int mid=getmiddlelement(st);

    // cout<<"middle element of the stack is:"<<mid<<endl;
}