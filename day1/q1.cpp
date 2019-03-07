#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n,input, center_index, temp, j;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> numbers;

    for(int i=0;i<n;i++){
        cin>>input;
        numbers.push_back(input);
    }
    if(n%2==0){
        center_index = n/2;
    } else {
        center_index = (n+1)/2;
    }

    for(int i=0;i<center_index;i++){
        j = n-1-i;
        if(i==j)
            break;
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
    for(auto it=numbers.cbegin();it!=numbers.cend();it++){
        cout<<*it<<" ";
    }
    return 0;
}