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
//
//  ███╗   ██╗ ██████╗ ██╗   ██╗ █████╗
//  ████╗  ██║██╔═████╗██║   ██║██╔══██╗
//  ██╔██╗ ██║██║██╔██║██║   ██║███████║
//  ██║╚██╗██║████╔╝██║╚██╗ ██╔╝██╔══██║
//  ██║ ╚████║╚██████╔╝ ╚████╔╝ ██║  ██║
//  ╚═╝  ╚═══╝ ╚═════╝   ╚═══╝  ╚═╝  ╚═╝

#include "linux.h"
#include "dname.h"

struct dname_linux_lookup linux_lookup() {
    struct dname_linux_lookup lookup;
    //
    return lookup;
}

char* dname_linux_string(struct dname_linux_lookup *lookup) {
    char *linux_str;
    // sprintf() onto linux_str from /proc here
    return linux_str;
}