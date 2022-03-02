#include <iostream>
#include <string>

using namespace std;

class MultiUtility
{
    // even if you don't mention 'private' here, it'll be private by-default
private:
    // any of these below variables and functions aren't accessible by user
    int initialChoice;
    void selectTool(int id)
    {
        switch (id)
        {
        case 1:
            findLength();
            break;
        case 2:
            toUpperCase();
            break;
        case 3:
            toLowerCase();
            break;
        default:
            break;
        }
    }
    void findLength()
    {
        string word;
        cout << "Enter a word to know its length:" << endl;
        cin >> word;
        cout << "The length of " << word << " is " << word.length() << ".";
    }
    string convertToUpper(string word)
    {
        char tWord[word.length()];
        for (int i = 0; i < word.length(); i++)
        {
            tWord[i] = word[i] - 32;
        }
        return tWord;
    }
    void toUpperCase()
    {
        string word;
        cout << "Enter a word/sentence to convert to Uppercase:" << endl;
        cin >> word;
        cout << convertToUpper(word);
    }
    string convertToLower(string word)
    {
        char tWord[word.length()];
        for (int i = 0; i < word.length(); i++)
        {

            tWord[i] = word[i] + 32;
        }
        return tWord;
    }
    void toLowerCase()
    {
        string word;
        cout << "Enter a word/sentence to convert to Lowercase:" << endl;
        cin >> word;
        cout << convertToLower(word);
    }

public:
    void start()
    {
        cout << "WELCOME TO CMD MULTIUTILITY TOOL!" << endl;
        cout << "Enter a digit from below to continue:" << endl;
        cout << "1. Find length of word\t"
             << "2. Convert to upper case\t"
             << "3. Convert to lower case\t" << endl;
        cin >> initialChoice;
        selectTool(initialChoice);
    }
};

main()
{
    MultiUtility instance;
    instance.start();
    return 1;
}