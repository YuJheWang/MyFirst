#include <iostream>
#include <vector>

#include "BinaryTree.hpp"

template <typename T, typename Iter>
void sort(Iter begin, Iter end)
{
    BinaryTreeNode<T>* root  = Read<T>(begin, end);
}

int main()
{
    std::vector<float> number = {1.0f, 5.2f, 3.1f, 8.5f, 8.9f, 5.1f};
    BinaryTreeNode<float>* root = Read<float>(number.begin(), number.end());

    delete root;
}
