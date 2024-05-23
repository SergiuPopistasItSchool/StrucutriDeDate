// StrucutriDeDate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<stack>

class Stack
{
private:
	std::vector<int> elements;
public:
	// Adauga un element in varful stivei
	void push(int valeu)
	{
		elements.push_back(valeu);
	}


	int top()
	{
		//tema
	}
	// verifica daca stiva ii goala
	bool empty()
	{
		if (elements.empty())
			return true;
		else
			return false;
	}
	//afizeaza elementele din stack
	void display()
	{
		for (int i = elements.size() - 1; i >= 0; i--)
		{
			std::cout << elements[i] << std::endl;
		}		
	}
	//scoate un element din stiva
	int pop()
	{
		//tema
	}
};






//O(n)
bool gasesteElement(int arr[], int element)
{


	int dimens = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < dimens; i++)
	{
		if (arr[i] == element)
			return true;
	}
	return false;
}

class Node
{
public:
	int data;
	Node* next;
};

void printLinkedList(Node* n)
{
	while (n != nullptr)
	{
		std::cout << "Data este " << n->data << std::endl;
		n = n->next;
	}
}

//Insert a new node before head and becomes the new head
void push(Node** head,int new_data)
{
	//1 Creem un nou nod
	Node* n = new Node();
	//2 steam data cu argumentul din functie
	n->data = new_data;
	//3 Setam noul nod sa arate catre headu-ul vechi
	n->next = *head;
	//4 Steam head-ul veci sa arate catre noul nod
	*head = n;
}


int main()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	/*
	N N N
	*/
	head->data = 15;
	head->next = second;
	/*
	N -> N N
	*/
	second->data = 22;
	second->next = third;
	/*
	N -> N -> N
	*/
	third->data = 19;
	third->next = nullptr;
	/*
	N -> N -> N -> NULL
	*/
	printLinkedList(head);
	push(&head, 33);
	std::cout << "Noua lista\n";
	printLinkedList(head);

	Stack s;
	s.push(10);
	s.push(-2);
	s.push(3);
	s.display();

	
	//int myArr[5] = { 6,99,32,44,0 };
	////myArr[index] = O(1) accesare instanta	
	//std::cout << myArr[4] << std::endl;
	//gasesteElement(myArr, 0);
}