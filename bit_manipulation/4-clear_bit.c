/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	*n &= ~(1 << index);

	return (1);
}
