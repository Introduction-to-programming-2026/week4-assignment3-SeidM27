/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact. 

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
string name;
string phone;
}
Person;
int main(void)
{
Person people[10] =
{
{"Seid", "070111222"},
{"Ali", "071222333"},
{"Sara", "072333444"},
{"Arta", "075444555"},
{"Blerim", "076555666"}
};
int count = 5;
char add = get_char("Add new contact? (y/n): ");
if (add == 'y' || add == 'Y')
{
if (count < 10)
