require recipes-devtools/gcc/gcc-4.8.inc
require gcc-linaro-common-4.8.inc

RELEASE = "2013.04"
PR = "r${RELEASE}"
BINV = "4.8.1"

FILESPATH = "${@base_set_filespath([ '${FILE_DIRNAME}/gcc-${PV}' ], d)}"

#SRC_URI = "http://cbuild.validation.linaro.org/snapshots/gcc-${PV}-${RELEASE}.tar.bz2 "
SRC_URI = "https://launchpad.net/gcc-linaro/4.6/4.6-${RELEASE}/+download/gcc-${PV}-${RELEASE}.tar.bz2  \
	   file://0001-gcc-4.3.1-ARCH_FLAGS_FOR_TARGET.patch \
	   file://0002-uclibc-conf.patch \
	   file://0003-gcc-uclibc-locale-ctype_touplow_t.patch \
	   file://0004-uclibc-locale.patch \
	   file://0005-uclibc-locale-no__x.patch \
	   file://0006-uclibc-locale-wchar_fix.patch \
	   file://0007-uclibc-locale-update.patch \
	   file://0008-missing-execinfo_h.patch \
	   file://0009-c99-snprintf.patch \
	   file://0010-c99-complex-ugly-hack.patch \
	   file://0011-index_macro.patch \
	   file://0012-libmudflap-susv3-legacy.patch \
	   file://0013-libstdc-namespace.patch \
	   file://0014-sh-pr24836.patch \
	   file://0015-arm-Use-TARGET_ENDIAN_OPTION-for-determining-MULTILI.patch \
	   file://0016-gcc-poison-system-directories.patch \
	   file://0017-gcc-poison-dir-extend.patch \
	   file://0018-gcc-4.3.3-SYSROOT_CFLAGS_FOR_TARGET.patch \
	   file://0019-64-bit-multilib-hack.patch \
	   file://0020-optional-libstdc.patch \
	   file://0021-gcc-disable-MASK_RELAX_PIC_CALLS-bit.patch \
	   file://0022-COLLECT_GCC_OPTIONS.patch \
	   file://0023-Use-the-defaults.h-in-B-instead-of-S-and-t-oe-in-B.patch \
	   file://0024-PR-target-32219.patch \
	   file://0025-fortran-cross-compile-hack.patch \
	   file://0026-libgcc-sjlj-check.patch \
	   file://0027-cpp-honor-sysroot.patch \
	   file://0028-MIPS64-Default-to-N64-ABI.patch \
	   file://0029-Define-GLIBC_DYNAMIC_LINKER-and-UCLIBC_DYNAMIC_LINKE.patch \
	   file://0030-gcc-Fix-argument-list-too-long-error.patch \
	   file://0031-Disable-sdt.patch \
	   file://0032-libtool.patch \
	   file://0033-gcc-armv4-pass-fix-v4bx-to-linker-to-support-EABI.patch \
	   file://0034-Use-the-multilib-config-files-from-B-instead-of-usin.patch \
	   file://0035-wcast-qual-PR-55383.patch \
	   file://gcc-4.8-PR56797.patch \
       file://use-lib-for-aarch64.patch \
	   "

SRC_URI[md5sum] = "b6b8195019c7cb93629727ad14eaf7ca"
SRC_URI[sha256sum] = "7adf7aea60c702e7f02213fec58819e84a02ca0dac48590e89978e288f24dd04"

S = "${TMPDIR}/work-shared/gcc-${PV}-${PR}/gcc-${PV}-${RELEASE}"
B = "${WORKDIR}/gcc-${PV}-${RELEASE}/build.${HOST_SYS}.${TARGET_SYS}"
