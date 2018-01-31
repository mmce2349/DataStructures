//
//  Controller.cpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class "<< endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = fileController:: readCrimeDataToVector("/Users/mmce2349/Documents/Data Structures 2018/DataStructures/DataStructures/Data/crime.csv");
    for (int loop = 0; loop< 30; loop++)
    {
        cout << "Spot # " << loop << ": " << myData[loop] << endl;
    }
    
}
