#include <iostream>
#include <typeinfo>
#include <cmath>
#include <vector>
using namespace std;
 
int to_binary1(int num){
    vector<int> answer;
    int n = num;
    int i = 0;
    while (n != 0){
        if (n % 2 == 0){
            answer.push_back(1*pow(2,i));
        } else {
            answer.push_back(0);
        }
    n /= 2;
    i++;
    }
    int sum = 0;
    for (auto x:answer){
        sum +=x;
    }
    return sum;
}

class Solution { 
public: 
    int findComplement(int num) { 
        if (num == 0){
            return 1;
        }
        int answer = 0;
        int mnoj = 1;
        while (num != 0){
            if (num % 2 == 0){
                answer += mnoj;
            }
            num/= 2;
            mnoj*=2;
        }
    return answer;
    } 
}; 


int main(){
    Solution x;
    cout<<x.findComplement(11);
}