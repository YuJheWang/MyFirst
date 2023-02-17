#pragma once

template <typename T>
class BinaryTreeNode 
{
public:

    T value;

    BinaryTreeNode* left{nullptr}, *right{nullptr}, *parent{nullptr};

    BinaryTreeNode(T v) : value(v) {}

    ~BinaryTreeNode() { delete left; delete right; }

    void Add(BinaryTreeNode* node);

    void Delete();

    BinaryTreeNode* Copy();

    BinaryTreeNode* GetLeftest();

    BinaryTreeNode* GetRightest();

};

template <typename Iter, typename T>
BinaryTreeNode<T>* Read(Iter begin, Iter end)
{
    BinaryTreeNode<T>* result(*begin);
    for (auto i = begin + 1; i != end; i++)
        result->Add(*i);
    return result;
}
