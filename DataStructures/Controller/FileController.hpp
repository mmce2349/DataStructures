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
#include "CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
class fileController
{
private:
    
protected:
    
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
};
#endif /* FileController_hpp */
