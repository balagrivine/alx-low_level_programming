#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
*typedef struct elf_st
*{
*	unsigned char e_ident[16];
*	uint16_t e_type;
*	uint16_t e_machine;
*	uint32_t e_version;
*	uint64_t e_entry;
*} Elf64_Ehdr;
*/
/**
 *main - entry point in  c
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int file;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		printf("readelf: Error: Not an ELF file");
		printf("- it has the wrong magic bytes at the start\n");
		exit(98);
	}

	if (read(file, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		printf("readelf: Error: Not an ELF file");
		printf("- it has the wrong magic bytes at the start\n");
		close(file);
		exit(98);
	}

	if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E' ||
		elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
	{
		printf("readelf: Error: Not an ELF file");
		printf("- it has the wrong magic bytes at the start\n");
		close(file);
		exit(98);
	}

	printf("ELF file detected!\n");

	close(file);
	return (0);
}
