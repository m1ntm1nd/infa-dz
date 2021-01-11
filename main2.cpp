
#include <iostream>
#include <vector>

using namespace std;

class Solution { 
public: 
    void rotate(vector< vector<int> > &matrix) { 
        int length = matrix.size();
        for(int i = 0; i<length; i++){
            vector<int> v;
            for(int j=length-1; j>=0; j--){
                v.push_back(matrix[j][i]);
            }
            matrix.push_back(v);
        }
        for(auto it = matrix.begin(); it != matrix.end();) {
            matrix.erase(it);
        }
    } 
}; 

int main(){
    Solution x;
    vector<int> m = {1};
    vector<int> m1 = {3,4};
    vector<int> m2 = {7,8,9};
    vector< vector<int> > matrix = {m};
    x.rotate(matrix);
}