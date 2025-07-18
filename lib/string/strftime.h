// SPDX-FileCopyrightText: 2024, Alejandro Colomar <alx@kernel.org>
// SPDX-License-Identifier: BSD-3-Clause


#ifndef SHADOW_INCLUDE_LIB_STRFTIME_H_
#define SHADOW_INCLUDE_LIB_STRFTIME_H_


#include "config.h"

#include <time.h>

#include "sizeof.h"


// string format time
#define STRFTIME(dst, fmt, tm)  strftime(dst, countof(dst), fmt, tm)


#endif  // include guard
