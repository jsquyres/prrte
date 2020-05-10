#
# Copyright (c) 2010      Cisco Systems, Inc.  All rights reserved.
# Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

# main library setup
noinst_LTLIBRARIES = libmca_prrteif.la
libmca_prrteif_la_SOURCES =

# local files
headers = prrteif.h
libmca_prrteif_la_SOURCES += $(headers)

# Conditionally install the header files
if WANT_INSTALL_HEADERS
prrtedir = $(prrteincludedir)/src/mca/prrteif
nobase_prrte_HEADERS = $(headers)
endif

include base/Makefile.am

distclean-local:
	rm -f base/static-components.h
