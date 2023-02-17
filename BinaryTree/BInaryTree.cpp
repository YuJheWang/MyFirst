#include "BinaryTree.hpp"

template <typename T>
void BinaryTreeNode<T>::Add(BinaryTreeNode<T>* node)
{
    if (node->value < this->value) { 
        if (this->left == nullptr) this->left = node;
        else this->left->Add(node);
    } else {
        if (this->right == nullptr) this->right = node;
        else this->right->Add(node);
    }
}

template <typename T>
BinaryTreeNode<T>* BinaryTreeNode<T>::Copy()
{
    BinaryTreeNode<T>* result(value);
    if (left != nullptr)  result->left  = left->Copy();
    if (right != nullptr) result->right = right->Copy();
    return result;
}
