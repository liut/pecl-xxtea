/***********************************************************************

    Copyright 2006-2009 Ma Bingyao
    Copyright 2013 Gao Chunhui, Liu Tao

    These sources is free software. Redistributions of source code must
    retain the above copyright notice. Redistributions in binary form
    must reproduce the above copyright notice. You can redistribute it
    freely. You can use it with any free or commercial software.

    These sources is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY. Without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

        github: https://github.com/liut/pecl-xxtea

*************************************************************************/

#ifndef PHP_XXTEA_H
#define PHP_XXTEA_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#if HAVE_XXTEA
extern zend_module_entry xxtea_module_entry;
#define phpext_xxtea_ptr &xxtea_module_entry

#define XXTEA_MODULE_NAME        "xxtea"
#define XXTEA_BUILD_DATE         __DATE__ " " __TIME__
#define XXTEA_VERSION            "1.0.4"
#define XXTEA_AUTHOR             "Ma Bingyao, Gao Chunhui, Liu Tao"
#define XXTEA_HOMEPAGE           "https://github.com/liut/pecl-xxtea"

ZEND_MINIT_FUNCTION(xxtea);
ZEND_MSHUTDOWN_FUNCTION(xxtea);
ZEND_MINFO_FUNCTION(xxtea);

/* declaration of functions to be exported */
ZEND_FUNCTION(xxtea_encrypt);
ZEND_FUNCTION(xxtea_decrypt);
ZEND_FUNCTION(xxtea_info);

#else /* if HAVE_XXTEA */
#define phpext_xxtea_ptr NULL
#endif

#endif /* ifndef PHP_XXTEA_H */
