require recipes-devtools/gcc/gcc-4.7.inc
require gcc-linaro-common-4.7.inc

RELEASE = "2013.04"
PR = "r${RELEASE}"
BINV = "4.7.3"

FILESPATH = "${@base_set_filespath([ '${FILE_DIRNAME}/gcc-${PV}' ], d)}"

#SRC_URI = "https://launchpad.net/gcc-linaro/4.6/4.6-${RELEASE}/+download/gcc-${PV}-${RELEASE}.tar.bz2 
SRC_URI = "http://cbuild.validation.linaro.org/snapshots/gcc-${PV}-${RELEASE}.tar.bz2 \
	   file://gcc-4.3.1-ARCH_FLAGS_FOR_TARGET.patch \
	   file://64bithack.patch \
	   file://optional_libstdc.patch \
	   file://use-defaults.h-and-t-oe-in-B.patch \
	   file://fix-g++-sysroot.patch \
	  "

SRC_URI[md5sum] = "a043a60fcff5dbbceb4b0dd753548a21"
SRC_URI[sha256sum] = "18c308d88c54d8e37cf44c5293059e6c210c70d48dcc89c08d5d1d19cea7ade4"

S = "${TMPDIR}/work-shared/gcc-${PV}-${PR}/gcc-${PV}-${RELEASE}"
B = "${WORKDIR}/gcc-${PV}-${RELEASE}/build.${HOST_SYS}.${TARGET_SYS}"
