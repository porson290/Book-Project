#include "Util.h"
#include <iostream>

#include <vector>

namespace Utils {
    void PrintArrayOfString(std::string Array[], int Size)
    {
        for (int i = 0; i < Size; i++) {
			//std::cout << "Please work" << "\n"; 
			std::cout << Array[i] << "\n";
		}
    }
}