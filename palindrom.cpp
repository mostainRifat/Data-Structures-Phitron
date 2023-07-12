#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &word, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (word[start] == word[end])
    {
        return isPalindrome(word, start + 1, end - 1);
    }

    return false;
}

int main()
{
    string word;
    cin >> word;

    bool isPalin = isPalindrome(word, 0, word.length() - 1);

    if (isPalin)
    {
        cout << "Yes" << std::endl;
    }
    else
    {
        cout << "No" << std::endl;
    }

    return 0;
}
