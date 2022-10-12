#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    ofstream result("dynamic2.result", ios::out);
    for(int k=0; k<4; ++k){
        for(int i=15; i<=30; ++i){

            vector<int> dynamic;
            for(int j=0; j<pow(2, i); ++j){
                dynamic.push_back(rand());
            }

            clock_t start = clock();

            long long sum = 0;
            for(int j=0; j<pow(2, i); ++j){
                sum += dynamic[j];
            }

            clock_t end = clock();
            result << (double)(end-start)/CLOCKS_PER_SEC << endl;
            
        }
    }
    result.close();
    return 0;
}