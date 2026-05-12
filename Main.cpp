#include <iostream>

using namespace std;

int main()
{
    int myMatrix[3][2]{
        {1, 2},
        {2, 4},
        {5, 6}

    };
    for(int row =0; row < 3; row++){
        for(int col =0; col < 2; col++){
            cout <<myMatrix[row][col]<<" ";

        }
        cout << endl;
    }
    return 0;
}
