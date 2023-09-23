#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

typedef uint16_t Elf32_Half;
typedef uint32_t Elf32_Word;
typedef uint32_t Elf32_Addr;
typedef uint32_t Elf32_Off;

typedef uint16_t Elf64_Half;
typedef uint32_t Elf64_Word;
typedef uint64_t Elf64_Addr;
typedef uint64_t Elf64_Off;

int main(int argc, char **argv)
{
	int fd;
	unsigned char e_ident[16];
	ssize_t bytesRead;
	int i;
	Elf32_Half e_type32;
	Elf64_Half e_type64;
	Elf32_Addr e_entry32;
	Elf64_Addr e_entry64;

	const char *class_str[] =
	{
		"INVALID", "ELF32", "ELF64"
	};
	const char *data_str[] =
	{
		"INVALID", "2's complement, little endian", "2's complement, big endian"
	};
	const char *osabi_str[] =
	{
       		"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD", "UNIX - Linux",         "UNIX - GNU Hurd", "UNIX - Solaris", "UNIX - AIX", "UNIX - IRIX",         "UNIX - FreeBSD", "UNIX - Tru64", "UNIX - Novell Modesto", "UNIX - OpenBSD",         "UNIX - OpenVMS", "UNIX - NonStop Kernel", "UNIX - AROS", "UNIX - Fenix OS", "UNIX - CloudABI"    
	};
	const char *type_str[] =
	{
	       	"NONE (No file type)", "REL (Relocatable file)", "EXEC (Executable file)", "DYN (Shared object file)", "CORE (Core file)" 
	};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	bytesRead = read(fd, e_ident, 16);
	if (bytesRead != 16)
	{
		perror("Error reading e_ident");
		close(fd);
		return (98);
	}

	if (e_ident[0] != 0x7F || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		fprintf(stderr, "This is not an ELF file\n");
		close(fd);
		return 98;
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x", e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n", class_str[e_ident[4]]);
	printf("  Data:                              %s\n", data_str[e_ident[5]]);
	printf("  Version:                           %d (current)\n", e_ident[6]);
	printf("  OS/ABI:                            %s\n", (e_ident[7] < sizeof(osabi_str)/sizeof(*osabi_str)) ? osabi_str[e_ident[7]] : "<unknown>");
	printf("  ABI Version:                       %d\n", e_ident[8]);
	if (e_ident[4] == 1)
	{
		lseek(fd, 16, SEEK_SET);
		bytesRead = read(fd, &e_type32, 2);
		lseek(fd, 24, SEEK_SET);
		bytesRead += read(fd, &e_entry32, 4);
		if (bytesRead != 6)
		{
			perror("Error reading ELF32 fields");
			close(fd);
			return (98);
		}
		printf("  Type:                              %s\n", type_str[e_type32]);
		printf("  Entry point address:               0x%x\n", e_entry32);
	}
	else if (e_ident[4] == 2)
	{
		lseek(fd, 16, SEEK_SET);
		bytesRead = read(fd, &e_type64, 2);
		lseek(fd, 24, SEEK_SET);
		bytesRead += read(fd, &e_entry64, 8);
		if (bytesRead != 10)
		{
			perror("Error reading ELF64 fields");
			close(fd);
			return (98);
			
		}
		printf("  Type:                              %s\n", type_str[e_type64]);
		printf("  Entry point address:               0x%lx\n", e_entry64);
	}
	else
	{
		fprintf(stderr, "Invalid ELF class\n");
		close(fd);
		return (98);
	}
	close(fd);
	return 0;
}
