#pragma once

struct Node
{
	int data;
	Node* next;
};

/// <summary>
/// Class to resolve exercises of linked lists
/// </summary>
class LinkedListClassCourse
{
public:
	Node* tail, * head;
	LinkedListClassCourse();
	void ConnectTwoNodes();
	void Create(int value);
	void Display();
	void InsertStart(int value);
	void InsertPos(int pos, int value);
	void HowWorksDoublePointer(int num);
	void DeleteNode(struct Node **head_ref, int key);
	void DeleteComplete(Node** head_ref);
	int Count(struct Node* head);
	bool Exist(int data);
	void RemovingOfDuplicates();
	void RemoveDuplicatesUnshortedList();
	void ReversingSingleLinkedList();
	void SeperateEvenOdd();
};


