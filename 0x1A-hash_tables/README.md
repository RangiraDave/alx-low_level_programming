##This directory contains the following tasks about "Hash tables":

###Learning objectives:
What is a hash function
What makes a good hash function
What is a hash table, how do they work and how to use them
What is a collision and what are the main ways of dealing with collisions in the context of a hash table
What are the advantages and drawbacks of using hash tables
What are the most common use cases of hash tables



0. Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL



1. Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
You are allowed to copy and paste the function from this page



2. Write a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks



3. Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:

hetairas collides with mentioner
heliotropes collides with neurospora
depravement collides with serafins
stylist collides with subgenera
joyful collides with synaphea
redescribed collides with urites
dram collides with vivency



4. Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
Returns the value associated with the element, or NULL if key couldn’t be found



5. Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
where ht is the hash table
You should print the key/value in the order that they appear in the array of hash table
Order: array, list
Format: see example
If ht is NULL, don’t print anything


6. Write a function that deletes a hash table.

Prototype: void hash_table_delete(hash_table_t *ht);
where ht is the hash table



100. In PHP, hash tables are ordered. Wait… WAT? How is this even possible?



Before you continue, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?

For this task, please:

Read PHP Internals Book: HashTable
Use the same hash function
Use these data structures:
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
Rewrite the previous functions using these data structures:

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
The key/value pair should be inserted in the sorted list at the right place
Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
Should print the hash table using the sorted linked list
void shash_table_print_rev(const shash_table_t *ht);
Should print the hash tables key/value pairs in reverse order using the sorted linked list
void shash_table_delete(shash_table_t *ht);
You are allowed to have more than 5 functions in your file
julien@ubuntu:~/0x1A. Hash tables$ cat 100-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht  
julien@ubuntu:~/0x1A. Hash tables$ ./sht 
{'y': '0'}
{'j': '1', 'y': '0'}
{'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
julien@ubuntu:~/0x1A. Hash tables$ 



##Happy coding!
