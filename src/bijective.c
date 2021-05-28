// Copyright © 2021 Kris Nóva <kris@nivenly.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "dname.h"
#include "bijective.h"
#include "names.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dname_bijection(struct dname_digest *digest) {
    int j;
    char *name = malloc(DNAME_SHA256_DIGEST_32 * DNAME_SHA256_DIGEST_32 + 1);
    for (size_t i = 0; i < DNAME_SHA256_DIGEST_32; i++) {
        j = digest->sha256hash[i];
        char *n = getnamei(j);
        sprintf(name,"%s %s", name, n);
    }
    digest->name = malloc(DNAME_SHA256_DIGEST_32 * DNAME_SHA256_DIGEST_32 + 1);
    strcpy(digest->name, name);
}

