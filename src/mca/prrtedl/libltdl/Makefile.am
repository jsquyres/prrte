#
# Copyright (c) 2004-2010 The Trustees of Indiana University.
#                         All rights reserved.
# Copyright (c) 2014-2015 Cisco Systems, Inc.  All rights reserved.
# Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

sources = \
        prrtedl_libltdl.h \
        prrtedl_libltdl_component.c \
        prrtedl_libltdl_module.c

# This component will only ever be built statically -- never as a DSO.

noinst_LTLIBRARIES = libmca_prrtedl_libltdl.la

libmca_prrtedl_libltdl_la_SOURCES = $(sources)
libmca_prrtedl_libltdl_la_CPPFLAGS = $(prrte_prrtedl_libltdl_CPPFLAGS)
libmca_prrtedl_libltdl_la_LDFLAGS = \
        $(prrte_prrtedl_libltdl_LDFLAGS) \
        -module -avoid-version
libmca_prrtedl_libltdl_la_LIBADD = $(prrte_prrtedl_libltdl_LIBS)
