#
# Copyright (c) 2011      Los Alamos National Security, LLC.
#                         All rights reserved.
# Copyright (c) 2017      IBM Corporation.  All rights reserved.
# Copyright (c) 2017-2019 Intel, Inc.  All rights reserved.
# Copyright (c) 2020      Cisco Systems, Inc.  All rights reserved
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

sources = \
        state_prrted.h \
        state_prrted_component.c \
        state_prrted.c

# Make the output library in this directory, and name it either
# mca_<type>_<name>.la (for DSO builds) or libmca_<type>_<name>.la
# (for static builds).

if MCA_BUILD_prrte_state_prrted_DSO
component_noinst =
component_install = mca_state_prrted.la
else
component_noinst = libmca_state_prrted.la
component_install =
endif

mcacomponentdir = $(prrtelibdir)
mcacomponent_LTLIBRARIES = $(component_install)
mca_state_prrted_la_SOURCES = $(sources)
mca_state_prrted_la_LDFLAGS = -module -avoid-version
mca_state_prrted_la_LIBADD = $(top_builddir)/src/libprrte.la

noinst_LTLIBRARIES = $(component_noinst)
libmca_state_prrted_la_SOURCES =$(sources)
libmca_state_prrted_la_LDFLAGS = -module -avoid-version
