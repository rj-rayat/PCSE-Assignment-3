#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int result = 0;
    int length = strlen(s);
    int i = 0;
    int j = length - 1;

    if (length == 1)
    {
        result = 1;
    }

    else
    {
        while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        if (s[i] != s[j])
        {
            result = 0;
            break;
        }
        else
        {
            result = 1;
        }

        i++;
        j--;
    }
    }

    return result;

}
int main()
{ 
  char s[1001];
  scanf("%s", s);
  int result = is_palindrome(s);

  if (result == 0)
  {
    printf("Not Palindrome\n");
  }
  else
  {
    printf("Palindrome\n");
  }
  return 0;
}