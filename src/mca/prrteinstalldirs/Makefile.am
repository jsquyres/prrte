#
# Copyright (c) 2006      Los Alamos National Security, LLC.  All rights
#                         reserved.
# Copyright (c) 2010 Cisco Systems, Inc.  All rights reserved.
# Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

# main library setup
noinst_LTLIBRARIES = libmca_prrteinstalldirs.la
libmca_prrteinstalldirs_la_SOURCES =

# local files
headers = prrteinstalldirs.h
libmca_prrteinstalldirs_la_SOURCES += $(headers)

# Conditionally install the header files
if WANT_INSTALL_HEADERS
prrtedir = $(prrteincludedir)/$(subdir)
nobase_prrte_HEADERS = $(headers)
endif

include base/Makefile.am

distclean-local:
	rm -f base/static-components.h
