#include "BinaryTree.hpp"

template <typename T>
BinaryTreeNode<T>* BinaryTreeNode<T>::Copy()
{
    BinaryTreeNode<T>* result(value);
    if (left != nullptr)  result->left  = left->Copy();
    if (right != nullptr) result->right = right->Copy();
}
