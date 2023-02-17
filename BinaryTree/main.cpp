#include <iostream>
#include <vector>

#include "BinaryTree.hpp"

int main()
{
    std::vector<float> number = {1.0f, 5.2f, 3.1f, 8.5f, 8.9f, 5.1f};
    Read<float>(number.begin(), number.end());
}
