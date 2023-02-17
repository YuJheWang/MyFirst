#include <iostream>
#include <vector>

#include "BinaryTree.hpp"

template <typename T, typename Iter>
std::vector<T> sort(Iter begin, Iter end)
{
    std::vector<T> result;
    BinaryTreeNode<T>* root  = Read<T>(begin, end);
    for (int i = 0; i < end - begin; i++)
    {
        BinaryTreeNode<T>* leftest = root->GetLeftest();
        result.push_back(leftest->value);
        leftest->Delete();
    }
    return result;
}

int main()
{
    std::vector<float> number = {1.0f, 5.2f, 3.1f, 8.5f, 8.9f, 5.1f};
    std::vector<float> sorted = sort<float>(number.begin(), number.end());

    for (auto i : sorted)
        std::cout << i << " " << std::endl;

    return 0;
}
