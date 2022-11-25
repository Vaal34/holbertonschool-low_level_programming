#include "hash_tables.h"

/**
 * key_index - the index of a key
 * @size: size of array
 * @key: key, string
 * Return: index at which the key pair should be stored in the array of the ht
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
