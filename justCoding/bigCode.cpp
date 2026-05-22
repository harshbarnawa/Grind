#include <iostream>
using namespace std;

int count_like_dislike(string A, string P)
{
    int count = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == P[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{

    string A, P;
    cin >> A;
    cin >> P;

    cout << count_like_dislike(A, P);
}