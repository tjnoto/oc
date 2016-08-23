/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2016 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig S�ther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--prefix=/app/.heroku/php/' '--with-config-file-path=/app/.heroku/php/etc/php' '--with-config-file-scan-dir=/app/.heroku/php/etc/php/conf.d' '--disable-phpdbg' '--enable-fpm' '--with-bz2' '--with-curl' '--with-pdo-mysql' '--with-mysqli' '--with-openssl' '--with-kerberos' '--with-pgsql' '--with-pdo-pgsql' '--with-readline' '--enable-sockets' '--enable-zip' '--with-zlib' '--enable-bcmath=shared' '--enable-calendar=shared' '--enable-exif=shared' '--enable-ftp=shared' '--with-gd=shared' '--enable-gd-native-ttf' '--with-freetype-dir=/usr' '--with-jpeg-dir=/usr' '--with-png-dir=/usr' '--with-gettext=shared,/app/.heroku/php/' '--with-gmp=shared' '--with-imap=shared,/app/.heroku/php//opt/imap-2007f' '--with-imap-ssl' '--enable-intl=shared' '--with-ldap=shared' '--with-ldap-sasl' '--enable-mbstring=shared' '--enable-pcntl=shared' '--enable-shmop=shared' '--enable-soap=shared' '--with-sqlite3=shared' '--with-pdo-sqlite=shared' '--with-xmlrpc=shared' '--with-xsl=shared' '--with-mcrypt=/app/.heroku/php/' '--with-mysql=shared'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		""
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	""
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         "/app/.heroku/php/lib/php"
#define PHP_INCLUDE_PATH	".:/app/.heroku/php/lib/php"
#define PHP_EXTENSION_DIR       "/app/.heroku/php/lib/php/extensions/no-debug-non-zts-20131226"
#define PHP_PREFIX              "/app/.heroku/php"
#define PHP_BINDIR              "/app/.heroku/php/bin"
#define PHP_SBINDIR             "/app/.heroku/php/sbin"
#define PHP_MANDIR              "/app/.heroku/php/php/man"
#define PHP_LIBDIR              "/app/.heroku/php/lib/php"
#define PHP_DATADIR             "/app/.heroku/php/share/php"
#define PHP_SYSCONFDIR          "/app/.heroku/php/etc"
#define PHP_LOCALSTATEDIR       "/app/.heroku/php/var"
#define PHP_CONFIG_FILE_PATH    "/app/.heroku/php/etc/php"
#define PHP_CONFIG_FILE_SCAN_DIR    "/app/.heroku/php/etc/php/conf.d"
#define PHP_SHLIB_SUFFIX        "so"