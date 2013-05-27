/*
Copyright (c) 2013. Victor M. Alvarez [plusvic@gmail.com].

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _COMPILER_H
#define _COMPILER_H

#include <stdio.h>

#include "yara.h"


#define yr_compiler_set_error_extra_info(compiler, info) \
    strncpy( \
        compiler->last_error_extra_info, \
        info, \
        sizeof(compiler->last_error_extra_info)); \
    compiler->last_error_extra_info[ \
        sizeof(compiler->last_error_extra_info) - 1] = 0;


int _yr_compiler_push_file(
    YARA_COMPILER* compiler,
    FILE* fh);


FILE* _yr_compiler_pop_file(
    YARA_COMPILER* compiler);

#endif