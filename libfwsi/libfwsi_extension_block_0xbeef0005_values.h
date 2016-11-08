/*
 * Extension block 0xbeef0005 values functions
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFWSI_EXTENSION_BLOCK_0xBEEF0005_VALUES_H )
#define _LIBFWSI_EXTENSION_BLOCK_0xBEEF0005_VALUES_H

#include <common.h>
#include <types.h>

#include "libfwsi_libcerror.h"
#include "libfwsi_extension_block.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfwsi_extension_block_0xbeef0005_values libfwsi_extension_block_0xbeef0005_values_t;

struct libfwsi_extension_block_0xbeef0005_values
{
	/* Dummy
	 */
	int dummy;
};

int libfwsi_extension_block_0xbeef0005_values_initialize(
     libfwsi_extension_block_0xbeef0005_values_t **extension_block_0xbeef0005_values,
     libcerror_error_t **error );

int libfwsi_extension_block_0xbeef0005_values_free(
     libfwsi_extension_block_0xbeef0005_values_t **extension_block_0xbeef0005_values,
     libcerror_error_t **error );

ssize_t libfwsi_extension_block_0xbeef0005_values_read(
         libfwsi_extension_block_0xbeef0005_values_t *extension_block_0xbeef0005_values,
         const uint8_t *extension_block_data,
         size_t extension_block_data_size,
         libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_EXTENSION_BLOCK_0xBEEF0005_VALUES_H ) */

