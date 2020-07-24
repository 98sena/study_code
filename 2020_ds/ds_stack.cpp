#include <iostream>
using namespace std;
class ArrayStack {
	int top;
	int MAX_SIZE = 5;
	int eles[5];

public :	
	ArrayStack() {
		top = -1;
		cout << "stack init" << endl;
	}

	void push(int ele) {
		if (isFull()) {
			cout << "no more space < return " << ele<< endl;
			return;
		}
		top++;
		eles[top] = ele;
		cout << "push into the stack" << endl;

	}
	int pop() {
		if (isEmpty()) {
			cout << "nothing in" << endl;
			return top;
		}
		cout << "pop out of the stack" << endl;
		return eles[top--];
	}
	int peek() {
		if (isEmpty()) {
			cout << "nothing in" << endl;
			return top;
		}
		cout << "this is a peek of the stack : ";
		return eles[top];

	}
	bool isFull() {
		if (top == MAX_SIZE - 1) {
			return true;
		}
		return false;
	}
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		return false;
	}
	void display() {
		if (isEmpty()) {
			cout << "nothing inside to show" << endl;
			return;
		}
		int cur = top;
		while (cur != -1) {
			cout << eles[cur--] << " ";
		}
		cout <<"no more"<< endl;
	}
};
int main() {
	//stack
	ArrayStack stacks;

	stacks.push(1);
	stacks.push(2);
	stacks.display();
	stacks.push(3);
	cout << stacks.peek() << endl;
	stacks.display();
	cout << stacks.pop() << endl;
	cout << stacks.pop() << endl;
	cout << stacks.pop() << endl;
	stacks.display();
	stacks.push(4);
	stacks.push(5);
	stacks.push(6);
	stacks.push(7);
	stacks.push(8);
	stacks.push(9);
	stacks.display();
	cout << stacks.peek() << endl;

	return 0;
}