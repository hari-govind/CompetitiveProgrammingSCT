//Find the quilibirum index of a given array
//i.e find index such that sum of left elements = sum of right elements

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {18,2,17,1};
    for(int i=1;i<numbers.size();i++){
        int leftsum=0,rightsum=0,j=numbers.size()-1;
        for(int k=0;k<i;k++){
            leftsum+=numbers[k];
        }
        for(int k=i+1;k<numbers.size();k++){
            rightsum+=numbers[k];
        }
        if(leftsum==rightsum){
            cout<<"Equilibrium Index: "<<i;
            return 0;
        }
    }
    return 0;
}