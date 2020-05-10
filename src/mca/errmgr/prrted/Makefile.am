#
# Copyright (c) 2010-2020 Cisco Systems, Inc.  All rights reserved
# Copyright (c) 2017      IBM Corporation.  All rights reserved.
# Copyright (c) 2017-2019 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

sources = \
        errmgr_prrted.h \
        errmgr_prrted_component.c \
        errmgr_prrted.c

# Make the output library in this directory, and name it either
# mca_<type>_<name>.la (for DSO builds) or libmca_<type>_<name>.la
# (for static builds).

if MCA_BUILD_prrte_errmgr_prrted_DSO
component_noinst =
component_install = mca_errmgr_prrted.la
else
component_noinst = libmca_errmgr_prrted.la
component_install =
endif

mcacomponentdir = $(prrtelibdir)
mcacomponent_LTLIBRARIES = $(component_install)
mca_errmgr_prrted_la_SOURCES = $(sources)
mca_errmgr_prrted_la_LDFLAGS = -module -avoid-version
mca_errmgr_prrted_la_LIBADD = $(top_builddir)/src/libprrte.la

noinst_LTLIBRARIES = $(component_noinst)
libmca_errmgr_prrted_la_SOURCES =$(sources)
libmca_errmgr_prrted_la_LDFLAGS = -module -avoid-version
