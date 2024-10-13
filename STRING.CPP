// #include<iostream>
// #include<string.h>
// using namespace std;


// int main(){
//     string name;
//     // cin>>name;

//     getline(cin,name);
//     cout<<"print name:"<<name<<endl;

// //     cout<<"printing first character:"<<name[0];







// cout<<"length of string :"<<name.length()<<endl;
// cout<<"string  is empty or not:"<<name.empty()<<endl;

// cout<<"first letter of string:"<<name.at(0);

// name.erase(3,4);
// cout<<name;








// string str1="devendrda";
// string str2="devendra";


// if(str1.compare(str2)==0){
//     cout<<"maching";

// }
// else{
//     cout<<"strings are not matching";
// }






// string name="my name is devendra rahangdale";


// cout<<name.substr(10,4);

 #include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate Hamming distance between two strings of equal length
int hammingDistance(const string& s1, const string& s2) {
    int distance = 0;
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        string A, B;
        cin >> A >> B;
        
        // Initialize minimum Hamming distance to a large number
        int minDistance = M; // Maximum possible distance is M (if all characters are different)
        
        // Iterate over all possible starting positions for substring of length M in A
        for (int i = 0; i <= N - M; ++i) {
            string subA = A.substr(i, M);
            int currentDistance = hammingDistance(subA, B);
            minDistance = min(minDistance, currentDistance);
        }
        
        // Output the minimum Hamming distance found
        cout << minDistance << endl;
    }
    
    return 0;
}













