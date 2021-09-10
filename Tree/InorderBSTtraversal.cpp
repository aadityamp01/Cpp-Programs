Node *deleteNode(Node *root, int X)
{
	if (root == NULL)
		return NULL;
	else if (X < root->data)
	{
		root->left = deleteNode(root->left, X);
		return root;
	}
	else if (root->data == X) {
		if (root->left == NULL && root->right == NULL)
		{
			delete root;
			return NULL;
		}
		if (root->left != NULL && root->right == NULL)
		{
			Node* temp = root->left ;
			delete root;
			return temp;
		}
		if (root->left == NULL && root->right != NULL)
		{
			Node* temp = root->right ;
			delete root;
			return temp;
		}

		Node * rep = root->right;
		while (rep->left != NULL) {
			rep = rep->left;
		}
		root->data = rep->data;
		root->right = deleteNode(root->right, rep->data);
		return root;
	}
	else {

		root->right = deleteNode(root->right, X);
		return root;

	}
}