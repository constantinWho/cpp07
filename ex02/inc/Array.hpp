#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
private:
	T *elements;
	unsigned int length;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();

	Array &operator=(const Array &other);
	T &operator[](unsigned int index);
	unsigned int size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
