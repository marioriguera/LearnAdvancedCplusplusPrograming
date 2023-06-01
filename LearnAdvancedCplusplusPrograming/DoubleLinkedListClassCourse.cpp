#include <iostream>
#include "DoubleLinkedListClassCourse.h"

/**
* @brief Display all Nodes doubly values.
*/
void DoubleLinkedListClassCourse::Display()
{
	NodeDouble* temp = new NodeDouble;
	temp = head;
	while (temp != NULL)
	{
		std::cout << "Value of data is " << temp->data << std::endl;
		temp = temp->next;
	}
}

template <typename T>
T find_max(T array[], int size) {
	T max_val = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > max_val) {
			max_val = array[i];
		}
	}
	return max_val;
}