/*
 * Copyright (c) 2006-2007 Los Alamos National Security, LLC.  All rights
 *                         reserved.
 * Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
 * Copyright (c) 2019      Research Organization for Information Science
 *                         and Technology (RIST).  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#include "prrte_config.h"

#include "src/mca/prrteinstalldirs/prrteinstalldirs.h"
#include "src/mca/prrteinstalldirs/config/install_dirs.h"

const prrte_prrteinstalldirs_base_component_t prrte_prrteinstalldirs_config_component = {
    /* First, the mca_component_t struct containing meta information
       about the component itself */
    {
        PRRTE_INSTALLDIRS_BASE_VERSION_2_0_0,

        /* Component name and version */
        "config",
        PRRTE_MAJOR_VERSION,
        PRRTE_MINOR_VERSION,
        PRRTE_RELEASE_VERSION,

        /* Component open and close functions */
        NULL,
        NULL
    },
    {
        /* This component is Checkpointable */
        PRRTE_MCA_BASE_METADATA_PARAM_CHECKPOINT
    },

    {
        PRRTE_PREFIX,
        PRRTE_EXEC_PREFIX,
        PRRTE_BINDIR,
        PRRTE_SBINDIR,
        PRRTE_LIBEXECDIR,
        PRRTE_DATAROOTDIR,
        PRRTE_DATADIR,
        PRRTE_SYSCONFDIR,
        PRRTE_SHAREDSTATEDIR,
        PRRTE_LOCALSTATEDIR,
        PRRTE_LIBDIR,
        PRRTE_INCLUDEDIR,
        PRRTE_INFODIR,
        PRRTE_MANDIR,
        PRRTE_PKGDATADIR,
        PRRTE_PKGLIBDIR,
        PRRTE_PKGINCLUDEDIR
    }
};
