//DataCenterMain.cpp - Main function for the Data Center
//
// History:


#include "DataCenter.h"

using namespace std;

int main(int argc, char *argv[])
{
    if(argc!=2) {
        cout<<"usage: dataCenter <dataCenterNo>"<<endl;
        return -1;
    }
    DataCenter dataCenter(atoi(argv[1]));
    return dataCenter.run();
}