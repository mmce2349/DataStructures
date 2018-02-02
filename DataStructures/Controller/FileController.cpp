//
//  FileController.cpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> fileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount =0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
            while(!dataFile.eof())
            {
                getline(dataFile, currentCSVLine, '\n');
                if (rowCount !=0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                    
                        if (currentCSVLine.length() != 0)
                        {
                            CrimeData row(currentCSVLine);
                            crimeVector.push_back(row);
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
    return crimeVector;
    
}
