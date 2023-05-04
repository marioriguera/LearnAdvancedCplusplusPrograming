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
private:
	Node* tail, * head;

public:
	LinkedListClassCourse();
	void ConnectTwoNodes();
	void Create(int value);
	void Display();
	void InsertStart(int value);
	void InsertPos(int pos, int value);
	void HowWorksDoublePointer(int num);
};


