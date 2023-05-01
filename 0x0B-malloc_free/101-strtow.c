#include "main.h"

/**
*strtow - devide stirng into words
*@str: string to be devided
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
char **split;
int a, b = 0, temp = 0;
int size = 0, words = num_words(str);

if (words == 0)
return (NULL);
split = (char **) malloc(sizeof(char *) * (words + 1));
if (split != NULL)
{
for (a = 0; a <= len(str) && words; a++)
{
if ((str[a] != ' ') && (str[a] != '\0'))
size++;
else if (((str[a] == ' ') || (str[a] == '\0')) && a && (str[a - 1] != ' '))
{
split[b] = (char *) malloc(sizeof(char) * size + 1);
if (split[b] != NULL)
{
while (temp < size)
{
split[b][temp] = str[(a - size) +temp];
temp++;
}
split[b][temp] = '\0';
size = temp = 0;
j++;
}
else
while (b-- >= 0)
free(split[b]);
free(split);
return (NULL);
}
}
split[words] = NULL;
return (split);
}
else
return (NULL);
}
/**
* num_words - counts the number of words in str
*@str: string to be used
*
*Return: number of words
*/
int num_words(char *str)
{
int a = 0, words = 0;

while (a <= len(str))
{
if ((str[a] != ' ') && (str[a] != '\0'))
{
a++;
}
else if (((str[a] == ' ') || (str[a] == '\0')) && a && (str[a - 1] != ' '))
{
words += 1;
a++;
}
else
{
a++;
}
}
return (words);
}

/**
* len - returns length of string
* @str: string to be counted*
* Return: length of the string
*/

int len(char *str)
{
int leng = 0;

if (str != NULL)
{
while (str[len])
leng++;
}
return (leng);
}
