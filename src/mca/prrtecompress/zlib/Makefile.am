#
# Copyright (c) 2004-2010 The Trustees of Indiana University.
#                         All rights reserved.
# Copyright (c) 2014-2015 Cisco Systems, Inc.  All rights reserved.
# Copyright (c) 2017      IBM Corporation.  All rights reserved.
# Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

AM_CPPFLAGS = $(prrtecompress_zlib_CPPFLAGS)

sources = \
        prrtecompress_zlib.h \
        prrtecompress_zlib_component.c \
        prrtecompress_zlib.c

# Make the output library in this directory, and name it either
# mca_<type>_<name>.la (for DSO builds) or libmca_<type>_<name>.la
# (for static builds).

if MCA_BUILD_prrte_prrtecompress_zlib_DSO
component_noinst =
component_install = mca_prrtecompress_zlib.la
else
component_noinst = libmca_prrtecompress_zlib.la
component_install =
endif

mcacomponentdir = $(prrtelibdir)
mcacomponent_LTLIBRARIES = $(component_install)
mca_prrtecompress_zlib_la_SOURCES = $(sources)
mca_prrtecompress_zlib_la_LDFLAGS = -module -avoid-version $(prrtecompress_zlib_LDFLAGS)
mca_prrtecompress_zlib_la_LIBADD = $(top_builddir)/src/libprrte.la $(prrtecompress_zlib_LIBS)

noinst_LTLIBRARIES = $(component_noinst)
libmca_prrtecompress_zlib_la_SOURCES = $(sources)
libmca_prrtecompress_zlib_la_LDFLAGS = -module -avoid-version $(prrtecompress_zlib_LDFLAGS)
libmca_prrtecompress_zlib_la_LIBADD = $(prrtecompress_zlib_LIBS)
