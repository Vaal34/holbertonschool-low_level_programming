#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *table;

	table = calloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size;
	table->(*array);

	return (table);
}
