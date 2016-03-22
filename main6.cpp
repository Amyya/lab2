#include <iostream>
#include <unistd.h>
#include "bmi.h"
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main() {
    int height = 0;
    int weight = 0;
    BMI b;
    ifstream inFile("file.in", ios::in);
    if (!inFile){
        cerr<<"Failed opening"<<endl;
        exit(1);
    }
    ofstream outFile("file.out", ios::out);
    if(!outFile){
        cerr<<"Failed to open"<<endl;
        exit(1);
    }
    while(inFile>>height>>weight){
        if(height==0 && weight==0)
            break;
        b.setHeight(height);
        b.setWeight(weight);
        outFile<<setprecision(2)<<fixed<<b.getBmi()<<" "<<b.getCategory(b.getBmi())<<"\n";
    }


	return 0;
}
