#include<iostream>
#include"process.h"
using std::cout,std::endl;

void Process::planProcess(){
    cout<<"planning processing!"<<endl;
    mymap.mapInfo();
    cout<<"planning success!"<<endl;
}