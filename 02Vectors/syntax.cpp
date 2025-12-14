#include<iostream> 
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    // vector<int> vec = {1,2,3};
    // vector<int> vec(3,0);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    cout << "size before pop = " << vec.size() << endl;
    vec.pop_back();
    cout << "size before pop = " << vec.size() << endl;
    cout << "val at 1st index: " << vec.at(1) << endl;
    for(int val : vec) cout << val << endl;
   return 0;
}