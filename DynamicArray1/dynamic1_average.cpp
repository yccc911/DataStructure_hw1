#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream data1, data2, data3, data4;
    data1.open("dynamic1.result1", ios::in);
    data2.open("dynamic1.result2", ios::in);
    data3.open("dynamic1.result3", ios::in);
    data4.open("dynamic1.result4", ios::in);

    double ave[16];
    char tmp[10];
    double temp;

/*     data1.getline(tmp, 10, '\n');
    cout << tmp << endl; */

    for(int i=0; i<16; ++i){
        data1 >> tmp;
        temp = stod(tmp);
        ave[i] += temp;
    }
    for(int i=0; i<16; ++i){
        data2 >> tmp;
        temp = stod(tmp);
        ave[i] += temp;
    }
    for(int i=0; i<16; ++i){
        data3 >> tmp;
        temp = stod(tmp);
        ave[i] += temp;
    }
    for(int i=0; i<16; ++i){
        data4 >> tmp;
        temp = stod(tmp);
        ave[i] += temp;
    }

    data1.close();
    data2.close();
    data3.close();
    data4.close();

    ofstream average("dynamic1.average", ios::out);
    for(int i=0; i<16; ++i){
        ave[i] /= 4;
        average << ave[i] << endl;
    }
    average.close();

    return 0;
}