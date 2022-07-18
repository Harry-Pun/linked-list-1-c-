#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstring>


class Node {
public:
	int data;
	Node* next;
};

class carinfo{
	

	public:
		std::string model;
		std::string brand;
		int price_in_HKD;
		float hieght_in_m;
	private:
	
};

int main() {
	std::cout << "linked list test" << std::endl;
	int y = 5;
	int& x = y;//reference
	int* k = &y;//pointer
	

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 5;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    delete third;
    delete second;
    delete head;

	return 0;
}