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

#ifndef P_LIBASSERT_H_
# define P_LIBASSERT_H_                1

# include <stdio.h>
# include <stdlib.h>

# include <ux/cdefs.h>

# include "assert.h"

# undef assert

void assert_ux2003(const char *expr, const char *file, int line, const char *func) __UX_SYM03(assert);

#endif /*!P_LIBASSERT_H_*/
