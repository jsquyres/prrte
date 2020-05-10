#
# Copyright (c) 2014-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

AM_CPPFLAGS = $(LTDLINCL) $(prrtereachable_CPPFLAGS)

# main library setup
noinst_LTLIBRARIES = libmca_prrtereachable.la
libmca_prrtereachable_la_SOURCES =

# pkgdata setup
dist_prrtedata_DATA =

# local files
headers = prrtereachable.h
libmca_prrtereachable_la_SOURCES += $(headers)

# Conditionally install the header files
if WANT_INSTALL_HEADERS
prrtedir = $(prrteincludedir)/$(subdir)
nobase_prrte_HEADERS = $(headers)
endif

include base/Makefile.am

distclean-local:
	rm -f base/static-components.h
