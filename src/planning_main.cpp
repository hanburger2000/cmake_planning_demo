#include<iostream>
#include"process.h"
#include"show_result.h"
using std::cout,std::endl;

int main(){
    Process pro;
    cout<<"planning start!"<<endl;
    pro.planProcess();
    cout<<"planning finish."<<endl;

    cout<<"show result"<<endl;
    ShowResult showRes;
    showRes.drawResult();

    return 0;
}