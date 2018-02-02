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
    findMaxandMin();
}

void Controller :: findMaxandMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
      vector<CrimeData> myData = fileController:: readCrimeDataToVector("/Users/mmce2349/Documents/Data Structures 2018/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex =0;
    int maxIndex = 0;
    
    for( int index = 1; index< myData.size(); index++)
    {
        if ( myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        
        else if (myData [maxIndex] > myData [index] )
        {
            maxIndex = index;
        }
            
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex<< " and it is: "<< myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex<< " and it is: "<< myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
