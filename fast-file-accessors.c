/***************************************************************************
 *  This file is automatically generated by gen-get-set.  Be sure to keep
 *  track of any manual changes.
 *
 *  These generated functions are not expected to be perfect.  Check and
 *  edit as needed before adding to your code.
 ***************************************************************************/

#include <string.h>
#include <ctype.h>
#include <stdbool.h>        // In case of bool
#include <stdint.h>         // In case of int64_t, etc
#include <xtend/string.h>   // strlcpy() on Linux
#include "fast-file-private.h"


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for buff member in a xt_ffile_t structure.
 *      Use this function to get buff in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member buff.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      unsigned char * buff;
 *
 *      buff = xt_ffile_get_buff(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

unsigned char *    xt_ffile_get_buff(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->buff;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for an array element of buff member in a xt_ffile_t
 *      structure. Use this function to get xt_ffile_ptr->buff[c]
 *      in a xt_ffile_t object from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to get
 *      c               Subscript to the buff array
 *
 *  Returns:
 *      Value of one element of structure member buff.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      size_t          c;
 *      unsigned char * buff_element;
 *
 *      buff_element = xt_ffile_get_buff_ae(&xt_ffile, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

unsigned char  xt_ffile_get_buff_ae(xt_ffile_t *xt_ffile_ptr, size_t c)

{
    return xt_ffile_ptr->buff[c];
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for start_ptr member in a xt_ffile_t structure.
 *      Use this function to get start_ptr in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member start_ptr.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      unsigned char * start_ptr;
 *
 *      start_ptr = xt_ffile_get_start_ptr(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

unsigned char *    xt_ffile_get_start_ptr(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->start_ptr;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for an array element of start_ptr member in a xt_ffile_t
 *      structure. Use this function to get xt_ffile_ptr->start_ptr[c]
 *      in a xt_ffile_t object from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to get
 *      c               Subscript to the start_ptr array
 *
 *  Returns:
 *      Value of one element of structure member start_ptr.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      size_t          c;
 *      unsigned char * start_ptr_element;
 *
 *      start_ptr_element = xt_ffile_get_start_ptr_ae(&xt_ffile, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

unsigned char  xt_ffile_get_start_ptr_ae(xt_ffile_t *xt_ffile_ptr, size_t c)

{
    return xt_ffile_ptr->start_ptr[c];
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for bytes_read member in a xt_ffile_t structure.
 *      Use this function to get bytes_read in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member bytes_read.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      ssize_t         bytes_read;
 *
 *      bytes_read = xt_ffile_get_bytes_read(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

ssize_t    xt_ffile_get_bytes_read(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->bytes_read;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for buff_index member in a xt_ffile_t structure.
 *      Use this function to get buff_index in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member buff_index.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      ssize_t         buff_index;
 *
 *      buff_index = xt_ffile_get_buff_index(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

ssize_t    xt_ffile_get_buff_index(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->buff_index;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for disk_block_size member in a xt_ffile_t structure.
 *      Use this function to get disk_block_size in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member disk_block_size.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      ssize_t         disk_block_size;
 *
 *      disk_block_size = xt_ffile_get_disk_block_size(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

ssize_t    xt_ffile_get_disk_block_size(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->disk_block_size;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for buff_size member in a xt_ffile_t structure.
 *      Use this function to get buff_size in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member buff_size.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      ssize_t         buff_size;
 *
 *      buff_size = xt_ffile_get_buff_size(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

ssize_t    xt_ffile_get_buff_size(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->buff_size;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for fd member in a xt_ffile_t structure.
 *      Use this function to get fd in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member fd.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      int             fd;
 *
 *      fd = xt_ffile_get_fd(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

int    xt_ffile_get_fd(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->fd;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for flags member in a xt_ffile_t structure.
 *      Use this function to get flags in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member flags.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      int             flags;
 *
 *      flags = xt_ffile_get_flags(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

int    xt_ffile_get_flags(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->flags;
}


/***************************************************************************
 *  Library:
 *      #include <xtend/fast-file.h>
 *      -lxtend
 *
 *  Description:
 *      Accessor for child_pid member in a xt_ffile_t structure.
 *      Use this function to get child_pid in a xt_ffile_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      xt_ffile_ptr    Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member child_pid.
 *
 *  Examples:
 *      xt_ffile_t      xt_ffile;
 *      pid_t           child_pid;
 *
 *      child_pid = xt_ffile_get_child_pid(&xt_ffile);
 *
 *  History: 
 *  Date        Name        Modification
 *  2023-08-29  gen-get-set Auto-generated from fast-file-private.h
 ***************************************************************************/

pid_t    xt_ffile_get_child_pid(xt_ffile_t *xt_ffile_ptr)

{
    return xt_ffile_ptr->child_pid;
}
