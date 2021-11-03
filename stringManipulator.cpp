#include <iostream>
#include <string>

using namespace std;
int main(){
    string myTxt = "Test Text";
    string replacedTxt = myTxt.replace(0,4,"Evaluation");
    cout<<myTxt<<endl;
    return 0;
}