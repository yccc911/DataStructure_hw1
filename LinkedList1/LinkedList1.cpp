#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>

#include "SourceCode.h"

using namespace std;

int main(){
    ofstream result("LinkedList1.result", ios::out);
    for(int i=0; i<4; ++i){
        for(int j=15; j<=30; ++j){

            clock_t start = clock();

            LinkedList list;
            for(int k=0; k<pow(2, j); ++k){
                list.Push_front(rand());
            }

            clock_t end = clock();
            result << (double)(end-start)/CLOCKS_PER_SEC << endl;

        }
    }
    result.close();
    return 0;
}