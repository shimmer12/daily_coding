
#include <iostream>
using namespace std;

class BINARY {
	int data;
	BINARY *left, *right;

public:
	
	BINARY();

	
	BINARY(int);

	
	BINARY* INSERTION(BINARY*, int);

	
	void Inorder(BINARY*);
};


BINARY ::BINARY()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}


BINARY ::BINARY(int value)
{
	data = value;
	left = right = NULL;
}


BINARY* BINARY ::INSERTION(BINARY* root, int value)
{
	if (!root) {
	
		return new BINARY(value);
	}

	// INSERTION data.
	if (value > root->data) {
	
		// Process right nodes.
		root->right = INSERTION(root->right, value);
	}
	else if (value < root->data){
	

		// Process left nodes.
		root->left = INSERTION(root->left, value);
	}

	return root;
}


void BINARY ::Inorder(BINARY* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

// Driver code
int main()
{
	BINARY b, *root = NULL;
	root = b.INSERTION(root, 50);
	b.INSERTION(root, 30);
	b.INSERTION(root, 20);
	b.INSERTION(root, 40);
	b.INSERTION(root, 70);
	b.INSERTION(root, 60);
	b.INSERTION(root, 80);

	b.Inorder(root);
	return 0;
}


