// 172. Nodes without sibling: For a given Binary Tree of type integer, print all the nodes without any siblings.

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    else if (root->left != NULL && root->right == NULL)
    {
        cout << root->left->data << " ";
        printNodesWithoutSibling(root->left);
    }
    else if (root->right != NULL && root->left == NULL)
    {
        cout << root->right->data << " ";
        printNodesWithoutSibling(root->right);
    }
    else
    {
        printNodesWithoutSibling(root->left);
        printNodesWithoutSibling(root->right);
    }
}
