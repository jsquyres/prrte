# -*- shell-script -*-
#
# Copyright (c) 2006      Los Alamos National Security, LLC.  All rights
#                         reserved.
# Copyright (c) 2010      Cisco Systems, Inc.  All rights reserved.
# Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
# $COPYRIGHT$
#
# Additional copyrights may follow
#
# $HEADER$
#

AC_DEFUN([MCA_prrte_prrteinstalldirs_config_PRIORITY], [0])

AC_DEFUN([MCA_prrte_prrteinstalldirs_config_COMPILE_MODE], [
    AC_MSG_CHECKING([for MCA component $1:$2 compile mode])
    $3="static"
    AC_MSG_RESULT([$$3])
])


# MCA_prrteinstalldirs_config_CONFIG(action-if-can-compile,
#                        [action-if-cant-compile])
# ------------------------------------------------
AC_DEFUN([MCA_prrte_prrteinstalldirs_config_CONFIG],[
    AC_CONFIG_FILES([src/mca/prrteinstalldirs/config/Makefile
                     src/mca/prrteinstalldirs/config/install_dirs.h])
])
