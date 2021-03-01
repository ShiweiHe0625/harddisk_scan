/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#define AC_APPLE_UNIVERSAL_BUILD

/* freebsd ciss header location */
#define CISS_LOCATION

/* smartmontools CVS Tag */
#define CONFIG_H_CVSID

/* Define to 1 if C++ compiler supports __attribute__((packed)) */
#undef HAVE_ATTR_PACKED

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H

/* Define to 1 if you have the <cap-ng.h> header file. */
#define HAVE_CAP_NG_H

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME

/* Define to 1 if you have the <dev/ata/atavar.h> header file. */
#define HAVE_DEV_ATA_ATAVAR_H

/* Define to 1 if you have the <dev/ciss/cissio.h> header file. */
#define HAVE_DEV_CISS_CISSIO_H

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the `cap-ng' library (-lcap-ng). */
#define HAVE_LIBCAP_NG

/* Define to 1 if you have the `selinux' library (-lselinux). */
#define HAVE_LIBSELINUX

/* Define to 1 if you have the `systemd' library (-lsystemd). */
#define HAVE_LIBSYSTEMD

/* Define to 1 if you have the `usb' library (-lusb). */
#define HAVE_LIBUSB

/* Define to 1 if you have the <linux/cciss_ioctl.h> header file. */
#define HAVE_LINUX_CCISS_IOCTL_H

/* Define to 1 if you have the <linux/compiler.h> header file. */
#define HAVE_LINUX_COMPILER_H

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE_WIDER

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H

/* Define to 1 if you have the `regcomp' function. */
#define HAVE_REGCOMP

/* Define to 1 if you have the <selinux/selinux.h> header file. */
#define HAVE_SELINUX_SELINUX_H

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION

/* Define to 1 if you have the `sigset' function. */
#define HAVE_SIGSET

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <systemd/sd-daemon.h> header file. */
#define HAVE_SYSTEMD_SD_DAEMON_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H

/* Define to 1 if you have the <sys/tweio.h> header file. */
#define HAVE_SYS_TWEIO_H

/* Define to 1 if you have the <sys/twereg.h> header file. */
#define HAVE_SYS_TWEREG_H

/* Define to 1 if you have the <sys/tw_osl_ioctl.h> header file. */
#define HAVE_SYS_TW_OSL_IOCTL_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if the system has the type `__int128'. */
#undef HAVE___INT128

/* Define to 1 to use generic LE/BE code instead */
#define IGNORE_FAST_LEBE

/* Define to 1 if os_*.cpp still uses the old interface */
#define OLD_INTERFACE

/* Name of package */
#define PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT

/* smartmontools Home Page */
#define PACKAGE_HOMEPAGE "https://www.smartmontools.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME

/* Define to the full name and version of this package. */
#define PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME

/* Define to the home page for this package. */
#define PACKAGE_URL

/* Define to the version of this package. */
#define PACKAGE_VERSION "7.1"

/* Define to 1 to enable check on each SCSI cdb */
#define SCSI_CDB_CHECK

/* smartmontools Build Host */
#define SMARTMONTOOLS_BUILD_HOST ""

/* smartmontools Configure Arguments */
#define SMARTMONTOOLS_CONFIGURE_ARGS

/* smartmontools Release Date */
#define SMARTMONTOOLS_RELEASE_DATE

/* smartmontools Release Time */
#define SMARTMONTOOLS_RELEASE_TIME

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS

/* Version number of package */
#define VERSION

/* Define to 1 to use C++11 std::regex instead of POSIX regex(3) */
#define WITH_CXX11_REGEX

/* Define to 1 to include NVMe devices in smartd DEVICESCAN. */
#define WITH_NVME_DEVICESCAN

/* Define to 1 to enable legacy ATA support on Solaris SPARC. */
#define WITH_SOLARIS_SPARC_ATA

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif
