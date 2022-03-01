#include <stdio.h>

void encryptDecrypt();
// void checkPalindrome();
// void reverseWord();

void main()
{
    int choice;
    printf("\nWelcome to Jeel's multi-feature C App\n\n");
    printf("1. Encrypt-Decrypt a word\t2. Check Palindrome\t3. Reverse a word\n\n");
    printf("Enter a feature: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        fflush(stdin);
        encryptDecrypt();
        break;

    case 2:
        // checkPalindrome();
        break;

    case 3:
        // reverseWord();
        break;

    default:
        break;
    }
}

void encryptDecrypt()
{
    fflush(stdin);
    char eOrD;
    printf("\nWelcome to the World of Encryption & Decryption! We're so glad that you're here!\n\n");
    printf("Enter 'e' if you want to encrypt a word or 'd' if you want to decrypt a word (e/d): ");
    scanf("%c", &eOrD);
    if (eOrD == 'e' || eOrD == 'E')
    {
        fflush(stdin);
        char word[100];
        printf("\nGreat! Now enter a word to encrypt it: ");
        fflush(stdin);
        gets(word);

        char *ptr = word;
        for (int i = 0; i < sizeof(ptr); i++)
        {
            if (*ptr != '\0')
            {
                *ptr = *ptr + 7;
                ptr++;
            }
        }
        printf("\nEncrypted string is: %s, which is encrypted with the key: %d\n\n", word, 7);
    }
    else if (eOrD == 'd' || eOrD == 'D')
    {
        fflush(stdin);
        char deWord[100];
        printf("\nGreat! Now enter a word to decrypt it: ");
        gets(deWord);
        char *dePtr = deWord;
        for (int i = 0; i < sizeof(dePtr); i++)
        {
            if (*dePtr != '\0')
            {
                *dePtr = *dePtr - 7;
                dePtr++;
            }
        }
        printf("\nDecrypted string is: %s, which is decrypted with the key: %d\n\n", deWord, 7);
    }
    else
    {
        printf("Invalid input! Please try again!");
    }
}