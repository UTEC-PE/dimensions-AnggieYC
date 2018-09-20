#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
		int pos=coordinates[0];
		for(int i = 0; i < (dimensions);i++){ 
			pos = pos + size[i] * coordinates[i + 1]; // Esto no va a compilar ya que es sizes, no size (No has probado el código?)
			sizes[i + 1] = sizes[i] * size[i + 1];
		}
		return pos;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
	// Cómo probaste sin un main?
    system("pause");
    return EXIT_SUCCESS;
}