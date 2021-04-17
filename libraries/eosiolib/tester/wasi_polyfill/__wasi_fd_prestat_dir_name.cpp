#include <wasi/api.h>

extern "C" __wasi_errno_t __wasi_fd_prestat_dir_name(__wasi_fd_t fd,
                                                     uint8_t* path,
                                                     __wasi_size_t path_len)
    __attribute__((__import_module__("wasi_snapshot_preview1"),
                   __import_name__("fd_prestat_dir_name")))
{
   // root dir
   if (fd == 3)
   {
      if (path_len > 0)
         path[0] = '/';
      return 0;
   }
   return __WASI_ERRNO_BADF;
}
