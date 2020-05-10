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
        prrtedl_dlopen.h \
        prrtedl_dlopen_component.c \
        prrtedl_dlopen_module.c

# This component will only ever be built statically -- never as a DSO.

noinst_LTLIBRARIES = libmca_prrtedl_dlopen.la

libmca_prrtedl_dlopen_la_SOURCES = $(sources)
libmca_prrtedl_dlopen_la_LDFLAGS = -module -avoid-version
libmca_prrtedl_dlopen_la_LIBADD = $(prrte_prrtedl_dlopen_LIBS)
