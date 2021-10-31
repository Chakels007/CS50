#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
#include <cs50.h>
	
	
int main(int argc, string argv[])
{
	 int key;

	 if (argc != 2)
	    {
	        printf("Usage: ./caesar key\n");
	        return 1;
	    }
	
	 int argv_length = strlen(argv[1]);
	   for (int i = 0; i < argv_length; ++i)
	    {
	        if (argv[1][i] < 48 || argv[1][i] > 57)
	          {
	            printf("Usage: ./caesar key\n");
	            return 1;
	          }
	        else
	        {
	            key = atoi(argv[1]);
	        } 
	    }
	
	    string plaintext = get_string("plaintext:  ");
	    int plaintext_length = strlen(plaintext);

	    printf("ciphertext: ");
	    for (int i = 0; i < plaintext_length; ++i)
	    {
	        if (isalpha(plaintext[i]))
	        {
	            if (isupper(plaintext[i]))
	              {
	                printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);
	              }
	            else	         
	              {
	                printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);
	              }
	        }
	        else
	          {
	            printf("%c", plaintext[i]);
	          }
	    }
	    printf("\n");
	    return 0;
	}