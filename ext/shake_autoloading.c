#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "php_shake_autoloading.h"

#define PHP_SHAKE_AUTOLOADING_VERSION "1.1.2"
#define PHP_SHAKE_AUTOLOADING_EXTENSION_NAME "shake_autoloading"

extern zend_module_entry shake_autoloading_module_entry;
#define phpext_shake_autoloading_ptr &shake_autoloading_module_entry

PHP_FUNCTION(register_psr4_autoloader);
PHP_FUNCTION(register_files_autoloader);
PHP_FUNCTION(register_classmap_autoloader);

static function_entry shake_autoloading_functions[] = {
    PHP_FE(register_psr4_autoloader, NULL)
    PHP_FE(register_files_autoloader, NULL)
    PHP_FE(register_classmap_autoloader, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry slobel_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_SHAKE_AUTOLOADING_EXTENSION_NAME,
    shake_autoloading_functions,
    PHP_MINIT(slobel_init),
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_SHAKE_AUTOLOADING_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

PHP_FUNCTION(register_psr4_autoloader)
{
    RETURN_STRING("This is my function", 1);
}
