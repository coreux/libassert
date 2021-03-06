/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
http://pubs.opengroup.org/onlinepubs/009695399/basedefs/assert.h.html
*/

# undef assert

#ifndef __UX_ASSERT_H
# define __UX_ASSERT_H                 1

# include <ux/cdefs.h>

__UX_BEGIN_DECLS

void __ux_assert(const char *expr, const char *file, unsigned int line, const char *func) __UX_SYM03(assert);

__UX_END_DECLS

#endif /*!__UX_ASSERT_H_*/

/* Conditionally perform a diagnostic abort */
# ifdef NDEBUG
#  define assert(ignore)               ((void) 0)
# else
#  define assert(expr)                 ((void) ((expr) ? 0 : __ux_assert(#expr, __FILE__, __LINE__, __func__)))
# endif
