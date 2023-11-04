#include "hash_tables.h"

/**
 * key_index - gets the index at which the key/value should be stored
 * @key: the key
 * @size: size of the array
 * Return: index of the key
 *
 * Description: uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
