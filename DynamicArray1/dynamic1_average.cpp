#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream data;
    data.open("dynamic1.result", ios::in);

    double ave[16];
    char tmp[10];
    double temp;

    for(int j=0; j<4; ++j){

        for(int i=0; i<16; ++i){
            data >> tmp;
            temp = stod(tmp);
            ave[i] += temp;
        }
    
    }

    data.close();

    ofstream average("dynamic1.average", ios::out);
    for(int i=0; i<16; ++i){
        ave[i] /= 4;
        average << ave[i] << endl;
    }
    average.close();

    return 0;
}