/*
 * Copyright (c) 2004-2010 The Trustees of Indiana University.
 *                         All rights reserved.
 * Copyright (c) 2015 Cisco Systems, Inc.  All rights reserved.
 * Copyright (c) 2019-2020 Intel, Inc.  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

/**
 * This file is a simple set of wrappers around the selected PRRTE DL
 * component (it's a compile-time framework with, at most, a single
 * component; see prrtedl.h for details).
 */

#include "prrte_config.h"

#include "src/include/constants.h"

#include "src/mca/prrtedl/base/base.h"


int prrte_dl_open(const char *fname,
                 bool use_ext, bool private_namespace,
                 prrte_dl_handle_t **handle, char **err_msg)
{
    *handle = NULL;

    if (NULL != prrte_prrtedl && NULL != prrte_prrtedl->open) {
        return prrte_prrtedl->open(fname, use_ext, private_namespace,
                             handle, err_msg);
    }

    return PRRTE_ERR_NOT_SUPPORTED;
}

int prrte_dl_lookup(prrte_dl_handle_t *handle,
                   const char *symbol,
                   void **ptr, char **err_msg)
{
    if (NULL != prrte_prrtedl && NULL != prrte_prrtedl->lookup) {
        return prrte_prrtedl->lookup(handle, symbol, ptr, err_msg);
    }

    return PRRTE_ERR_NOT_SUPPORTED;
}

int prrte_dl_close(prrte_dl_handle_t *handle)
{
    if (NULL != prrte_prrtedl && NULL != prrte_prrtedl->close) {
        return prrte_prrtedl->close(handle);
    }

    return PRRTE_ERR_NOT_SUPPORTED;
}

int prrte_dl_foreachfile(const char *search_path,
                        int (*cb_func)(const char *filename, void *context),
                        void *context)
{
    if (NULL != prrte_prrtedl && NULL != prrte_prrtedl->foreachfile) {
        return prrte_prrtedl->foreachfile(search_path, cb_func, context);
    }

    return PRRTE_ERR_NOT_SUPPORTED;
}
