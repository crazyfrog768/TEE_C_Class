#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    vector<string> msg {"Hello", "C++", " ----World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
        i++;
        cout << i;
    }
    cout << endl;

    for (i = 0; i < 10; i++ )
      cout << i;

    return 0;
}