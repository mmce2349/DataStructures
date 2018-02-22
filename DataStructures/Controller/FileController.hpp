//
//  FileController.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include"../Model/Structures/Linear/LinkedList.hpp"
using namespace std;
class fileController
{
private:
    
protected:
    
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    
};
LinkedList<CrimeData> FileController:: readDataToList(string fileName)
{
    
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount !=0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}

#endif /* FileController_hpp */
