#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> myRecord = {1,2,3,4,5};
    // vector<int> myRecord{1,2,3,4,5};
    // vector<int> myRecord(3,2);

    vector<int> myVector = {2,5,0,1};
    myVector.push_back(100);
    for(auto i:myVector){
        cout<<i<<endl;
    }
    cout<<"--------------------------"<<endl;
    cout<<"Another loop"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0;i<myVector.size();i++){
        cout<<myVector.at(i)<<endl;
    }
    cout<<"--------------------------"<<endl;
    cout<<"Another loop"<<endl;
    cout<<"-------------------------"<<endl;
    for(auto i=myVector.end() - 1;i>=myVector.begin();i--){
        cout<<*i<<endl;
    }
    

}