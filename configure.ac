AC_PREREQ(2.62)
AC_INIT([jalapaquery], [0.0.1], [leonhad@gmail.com], [https://github.com/leonhad/pdftools])
AM_INIT_AUTOMAKE([-Wall tar-ustar no-define nostdinc ])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADER([config.h])

AC_CANONICAL_HOST

# Checks for programs.
AC_LANG([C++])
AC_PROG_CXX
AM_PROG_AR
AC_PROG_LIBTOOL
AX_CXX_COMPILE_STDCXX_11([noext], [mandatory])
AX_CHECK_COMPILE_FLAG([-Wall], [CXXFLAGS="$CXXFLAGS -Wall"])
AX_CHECK_COMPILE_FLAG([-pipe], [CXXFLAGS="$CXXFLAGS -pipe"])

# LT_INIT
# LT_LANG([C++])

# Checks for library functions.
# Checks for libraries.
AX_CHECK_ZLIB(,[AC_MSG_ERROR([Could not find zlib support])])

dnl PKG_CHECK_MODULES([QT], [Qt5Gui])
dnl PKG_CHECK_MODULES([QT], [Qt5Core])
PKG_CHECK_MODULES([QT], [Qt5Widgets])

AC_CHECK_HEADER([iconv.h],, [AC_MSG_ERROR([Could not find libiconv])])
AC_CACHE_CHECK([for libiconv], [am_cv_func_iconv], [
    am_cv_func_iconv="no, consider installing GNU libiconv"
    am_cv_lib_iconv=no
    AC_TRY_LINK([#include <stdlib.h>
#include <iconv.h>],
      [iconv_t cd = iconv_open("","");
       iconv(cd,NULL,NULL,NULL,NULL);
       iconv_close(cd);],
      am_cv_func_iconv=yes)
    if test "$am_cv_func_iconv" != yes; then
      am_save_LIBS="$LIBS"
      LIBS="$LIBS -liconv"
      AC_TRY_LINK([#include <stdlib.h>
#include <iconv.h>],
        [iconv_t cd = iconv_open("","");
         iconv(cd,NULL,NULL,NULL,NULL);
         iconv_close(cd);],am_cv_func_iconv=yes,
        LIBS="$am_save_LIBS")
    fi
  ])

AC_CONFIG_FILES([Makefile
                 doc/Makefile
                 src/Makefile
                 src/jalapaquery/Makefile
                 src/plugins/Makefile
                 src/plugins/databaseplugin/Makefile
                 src/plugins/umlplugin/Makefile
                 test/Makefile])
AC_OUTPUT
