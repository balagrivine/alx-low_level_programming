#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

void elf(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void abi(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned long int e_entry, unsigned char *e_ident);
void _close(int fd);

/**
 * elf - checks whether a specific file is an ELF file
 * @e_ident: pointer to an array of ELF numbers
 *
 * Description: if not elf file, exit with exit code 98
 */
void elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E'
			&& e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * magic - print magic no. of ELF file
 * @e_ident: pointer to array of ELF no.
 *
 * Description: seperate no. by spaces
 */
void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
/**
 * class - print class
 * @e_ident: pointer to an array of enf class
 */
void class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * data - prints data
 * @e_ident: pointer to array of ELF class
 */
void data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * version - prints version
 * @e_ident: pointer to array of ELF version
 */
void version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * osabi - prints osabi
 * @e_ident: pointer to an array
 */
void osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * abi - prints abi
 * @e_ident: pointer to array
 */
void abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * type - prints type
 * @e_type: type
 * @e_ident: pointer to array
 */
void type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * entry - prints entry
 * @e_entry: address of entry point
 * @e_ident: pointer to an array
 */
void entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}
/**
 * _close - closes elf file
 * @fd: elf file descriptor
 * Description: exit with exit status 98 if file can't be closed
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 * Description: exit with the code 98 if not elf file
 */
int main (int argc, char*argv[])
{
	Elf64_Ehdr *hdr;
	int op, rd;

	UNUSED(argc);

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		_close(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, hdr, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(hdr);
		_close(op);
		dprintf(STDERR_FILENO, "Error: %s :No such file\n", argv[1]);
		exit(98);
	}
	elf(hdr->e_ident);
	printf("ELF Header: \n");
	magic(hdr->e_ident);
	class(hdr->e_ident);
	data(hdr->e_ident);
	version(hdr->e_ident);
	osabi(hdr->e_ident);
	abi(hdr->e_ident);
	type(hdr->e_type, hdr->e_ident);
	entry(hdr->e_entry, hdr->e_ident);

	free(hdr);
	_close(op);
	return (0);
}
