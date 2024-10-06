#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool  isAnagram(char *w1, char *w2);

int main()
{
    char w1[] = "Eat";
    char w2[] = "ATE";

    if(isAnagram(w1,w2))
    {
        printf("strings are anagram");
    }
    else{
        printf("strings are not anagram");
    }
    return 0;
}

bool isAnagram(char *w1, char *w2)
{
    int len1=strlen(w1);
    int len2=strlen(w2);

    int count1[26] = {0};
    int count2[26] = {0};

    if(len1 != len2)
    {
        return false;
    }
    else{
    for(int i=0;i<len1;i++)
    {
        count1[w1[i] - 'a']++;
    }
    for(int i=0;i<len2;i++)
    {
        count2[w2[i] - 'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count1[i] == count2[i])
        {
            return true;
        }
    }
    }
    

}