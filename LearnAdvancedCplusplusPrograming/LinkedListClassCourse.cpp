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
	std::cout << "Value of *ptr  " << *ptr << std::endl;
	int** dptr = &ptr; // double pointer to ptr
	std::cout << "Value of dptr " << dptr << std::endl;
	std::cout << "Value of **dptr " << **dptr << std::endl;
}

/**
* @brief Delete a Node.
*/
void LinkedListClassCourse::DeleteNode(Node** head_ref, int key)
{
	struct Node* temp = *head_ref, * prev = nullptr;
	if (temp != NULL and temp->data == key)
	{
		*head_ref = temp->next;
		free(temp);
		return;
	}
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) return;

	prev->next = temp->next;
	free(temp);
}

/**
* @brief Clean the linked list.
*/
void LinkedListClassCourse::DeleteComplete(Node** head_ref)
{
	Node* current = *head_ref;
	Node* next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head_ref = NULL;
}

/**
* @brief Counts the number of items in a linked list.
* @param head: Pointer to the head of the linked list.
* @return Count of elements.
*/
int LinkedListClassCourse::Count(Node* head)
{
	int counting = 0;
	Node* current = head;

	while (current != nullptr)
	{
		counting++;
		current = current->next;
	}

	return counting;
}

/**
* @brief Search if exist a Node with esfecify data.
* @param data: The data tp find.
* @return If exist the data inside the linked list.
*/
bool LinkedListClassCourse::Exist(int data)
{
	Node* current = head;
	while (current != NULL)
	{
		if (current->data == data) {
			return true;
		}
		current = current->next;
	}
	return false;
}

/**
* @brief Removing nodes with duplicate data.
*/
void LinkedListClassCourse::RemovingOfDuplicates()
{
	Node* current = head;
	Node* nextOfNext;

	if (current == NULL)
	{
		return;
	}

	while (current->next != NULL)
	{
		if (current->data == current->next->data) {
			nextOfNext = current->next->next;
			free(current->next);
			current->next = nextOfNext;
		}
		else
		{
			current = current->next;
		}
	}
}

/**
* @brief Removing duplicates nodes from a unsorted linked list.
*/
void LinkedListClassCourse::RemoveDuplicatesUnshortedList()
{
	Node* ptr1, * ptr2, * duplicate;
	ptr1 = head;

	ptr2 = ptr1;
	while (ptr2->next != NULL)
	{
		if (ptr1->data == ptr2->next->data)
		{
			duplicate = ptr2->next;
			ptr2->next = ptr2->next->next;
			delete(duplicate);
		}
		else
		{
			ptr2 = ptr2->next;
		}
	}
	ptr1 = ptr1->next;
}


/**
* @brief Reversing a sinlge linked list.
*/
void LinkedListClassCourse::ReversingSingleLinkedList()
{
	Node* current = head;
	Node* before = NULL, * after = NULL;

	while (current != NULL)
	{
		after = current->next;
		current->next = before;

		before = current;
		current = after;
	}
	head = before;
}

/**
* @brief Separate the odd numbers from the original list.
*/
void LinkedListClassCourse::SeperateEvenOdd()
{
	Node* end = head;
	Node* prev = NULL;
	Node* curr = head;

	while (end->next != NULL)
	{
		end = end->next;
	}

	Node* new_end = end;

	while ((curr->data) % 2 != 0 && curr != end)
	{
		new_end->next = curr;
		curr = curr->next;
		new_end->next->next = NULL;
		new_end = new_end->next;
	}

	if ((curr->data) % 2 == 0)
	{
		head = curr;
		while (curr != end)
		{
			if (curr->data % 2 == 0)
			{
				prev = curr;
				curr = curr->next;
			}
			else
			{
				prev->next = curr->next;
				curr->next = NULL;
				//	ToDo: Revisar con los compañeros. Esto aquí no tiene sentido.
				//	Primero coge el current y lo ponen en el siguiente a new end
				//	para despues sobrescribir new end con el mismo valor
				//	no tiene sentido.
				new_end->next = curr;
				new_end = curr;
				//	he de mencionar que lo anterior funciona para el correcto comportamiento.
				curr = prev->next;
			}
		}
	}
	else
	{
		prev = curr;
	}

	if (new_end != end && (end->data) % 2 != 0)
	{
		prev->next = end->next;
		end->next = NULL;
		new_end->next = end;
	}

	return;
}


