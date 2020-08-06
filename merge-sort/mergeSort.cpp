#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v1){
    if(v1.size()<2)
        return;
    
    size_t middle=v1.size()/2;
    vector<int>left(v1.begin(),v1.begin()+middle);
    vector<int>right(v1.begin()+middle,v1.end());
    
    merge(left);
    merge(right);
    
    int left_index=0;
    int right_index=0;
    
    for(int i=0;i<v1.size();i++){
        
        if(left_index<left.size() and ( right_index>=right.size() or left[left_index]<right[right_index])){
            v1[i]=left[left_index];
            left_index++;
        }
        else{
            v1[i]=right[right_index];
            right_index++;
        }
    }
}
int main(int argc, const char * argv[]) {
    
    vector<int>v1={3,5,7,8,1,3,0,12,34,56};
    merge(v1);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
