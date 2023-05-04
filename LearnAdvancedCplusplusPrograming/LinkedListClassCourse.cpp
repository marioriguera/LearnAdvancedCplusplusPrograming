#include <iostream>
#include "LinkedListClassCourse.h"

/// <summary>
/// Create a new instance of LinkedListClassCourse. Empty constructor.
/// </summary>
LinkedListClassCourse::LinkedListClassCourse()
{
	tail = NULL;
	head = NULL;
}

/**
* @brief How to connect two nodes.
*/
void LinkedListClassCourse::ConnectTwoNodes()
{
	Node* p = new Node;
	p->data = 10;
	p->next = NULL;
	std::cout << "Value of p->data is: " << p->data << std::endl;
	std::cout << "Value of p->next is: " << p->next << std::endl;

	Node* q = new Node;
	q->data = 20;
	q->next = NULL;

	std::cout << "Value of q->data is: " << q->data << std::endl;
	std::cout << "Value of q->next is: " << q->next << std::endl;

	// connection
	p->next = q;

	std::cout << "Connection: " << std::endl;
	std::cout << "Value of p->data is: " << p->data << std::endl;
	std::cout << "Value of p->next is: " << p->next << std::endl;
}

/**
* @brief Create a new Node.
* @param value: Value of data.
*/
void LinkedListClassCourse::Create(int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

/**
* @brief Display all Node values.
*/
void LinkedListClassCourse::Display()
{
	Node* temp = new Node;
	temp = head;
	while (temp != NULL)
	{
		std::cout << "Value of data is " << temp->data << std::endl;
		temp = temp->next;
	}
}

/**
* @brief Insert a new node in the head of the list.
* @param A data value of a new Node.
*/
void LinkedListClassCourse::InsertStart(int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = head;
	head = temp;
}

/**
* @brief Insert a new node in specify position.
* @param pos : Position to insert new data.
* @param value: Value of insert data.
*/
void LinkedListClassCourse::InsertPos(int pos, int value)
{
	Node* prev = new Node;
	Node* curr = new Node;
	Node* temp = new Node;
	curr = head;
	for (int i = 1; i < pos; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	temp->data = value;
	prev->next = temp;
	temp->next = curr;
}
/**
* @brief How works a double pointer in C++.
* In C++, a double pointer (**) is a data type used to refer to a pointer to a pointer.
* @param num: A value.
*/
void LinkedListClassCourse::HowWorksDoublePointer(int num)
{
	std::cout << "Value of num " << num << std::endl;
	int* ptr = &num; // pointer to num
	std::cout << "Value of &num " << &num << std::endl;
	std::cout << "Value of ptr  " << ptr << std::endl;
	int** dptr = &ptr; // double pointer to ptr
	std::cout << "Value of dptr " << dptr << std::endl;
}

