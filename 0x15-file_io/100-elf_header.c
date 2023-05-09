#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: cannot open file '%s'\n", argv[1]);
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        fprintf(stderr, "Error: cannot read ELF header from file '%s'\n", argv[1]);
        exit(98);
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }

    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr.e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("none\n"); break;
       
    case ELFCLASS32: printf("ELF32\n"); break;
    case ELFCLASS64: printf("ELF64\n"); break;
    default: printf("unknown\n"); break;
}

printf("  Data:                              ");
switch (ehdr.e_ident[EI_DATA]) {
    case ELFDATANONE: printf("none\n"); break;
    case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
    case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
    default: printf("unknown\n"); break;
}

printf("  Version:                           %d\n", ehdr.e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (ehdr.e_ident[EI_OSABI]) {
    case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
    case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
    case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
    case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
    case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
    case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
    case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
    case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
    case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
    case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
    case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
    case ELFOSABI_ARM: printf;
}
