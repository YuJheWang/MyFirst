#pragma once

template <typename T>
class BinaryTreeNode {
public:

    T value;

    BinaryTreeNode* left{nullptr}, right{nullptr}, parent{nullptr};

    BinaryTreeNode(T v) : value(v) {}

    ~BinaryTreeNode() { delete left; delete right; }

    void Add(BinaryTreeNode* node);

    void Delete();

    BinaryTreeNode* Copy();

private:
};
