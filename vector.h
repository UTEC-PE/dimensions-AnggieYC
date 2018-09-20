#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;
             
    private:
        T* data;
        int dataSize;

        int dimensions;
        int* dimensionSizes;

    public:
		Vector() : data(nullptr) {};
             
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
			for (int i = 0; i < dimensions; i++) {
				dataSize *= dimensionSizes[i];
			}
			data = new T[dataSize];
            // TODO
        }
             
		void set(T datum, int* coordinates) {
			Operation cmp; // Esto podría ser parte de tus atributos privados?
			data[cmp(coordinates, dimensionSizes, dimensions)] = datum;
		}; // TODO
             
		T get(int* coordinates) {
			Operation cmp; // Esto podría ser parte de tus atributos privados?
			data[cmp(coordinates, dimensionSizes, dimensions)];
		}; // TODO

		// Y el destructor?
};

#endif
