#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

void add(const string& filename)
{
    system((string("git add ") + filename).c_str());
    system((string("git commit -m \"Add ") + filename + "\"").c_str());
}

int main(int argc, char* argv[]) 
{
    string filename = argv[1];
    add(filename);
}
