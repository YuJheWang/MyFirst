#include "BinaryTree.hpp"

template <typename T>
void BinaryTreeNode<T>::Add(BinaryTreeNode<T>* node) 
{
    if (node->value < this->value) 
    { 
        if (this->left == nullptr)  { this->left =  node; node->parent = this; }
        else this->left->Add(node);
    } 
    else 
    {
        if (this->right == nullptr) { this->right = node; node->parent = this; }
        else this->right->Add(node);
    }
}

template <typename T>
void BinaryTreeNode<T>::Delete() 
{
    BinaryTreeNode<T>* tempLeft{nullptr}, *tempRight{nullptr};
    if (left != nullptr)  tempLeft  = left->Copy();
    if (right != nullptr) tempRight = right->Copy();
    if (left == nullptr) parent->Add(tempRight);
    else 
    {
        parent->Add(tempLeft); parent->Add(tempRight);
    }
    delete left; delete right;
}

template <typename T>
BinaryTreeNode<T>* BinaryTreeNode<T>::Copy() 
{
    BinaryTreeNode<T>* result = new BinaryTreeNode<T>(value);
    if (left != nullptr)  result->left  = left->Copy();
    if (right != nullptr) result->right = right->Copy();
    return result;
}

template <typename T>
BinaryTreeNode<T>* BinaryTreeNode<T>::GetLeftest()
{
    if (this->left == nullptr) return this;
    else return (this->left->GetLeftest());
}

template <typename T>
BinaryTreeNode<T>* BinaryTreeNode<T>::GetRightest()
{
    if (this->right == nullptr) return this;
    else return (this->right->GetRighest());
}
