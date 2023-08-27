void m_check_elf(unsigned char *m_ptr);
void m_print_magic(unsigned char *m_ptr);
void m_print_data(unsigned char *m_ptr);
void m_print_version(unsigned *m_ptr);
void m_print_abi(unsigned *m_ptr);
void m_print_osabi(unsigned *m_ptr);
void m_print_type(unsigned *e_type, unsigned char *m_ptr);
void m_print_entry(unsigned long int e_entry, unsigned char *m_ptr);
void close_elf(int elf);

/**
 * m_check_elf - Checks if its an elf file
 * @m_ptr: pointer to elf magic number
 *
 * Description:
 */

void m_check_elf(unsigned char *m_ptr)
{
        int ind;

        for (ind = 0; ind < 4; ind++)
        {
                if (m_ptr[ind] != 127 && m_ptr[ind] != 'E' && m_ptr[ind] != 'L' && m_ptr[ind] != 'F')
                {
                        dprintf(STDERR_FILENO, "Erro: Not an Elf file\n");
                        exit(98);
                }


        }
}


/**
 *  m_print_magic - Prints magic number of Elf file
 *  @m_ptr: Pointer to magic file
 *
 *  Description:
 */

void m_print_magic(unsigned char *m_ptr)
{
        int ind;

        printf(" Magic: ");

        for (ind = 0; ind < EI_NIDENT; ind
}