// Copyright (c) 2015 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_APP_NODE_MAIN_H_
#define SHELL_APP_NODE_MAIN_H_
#include "base/component_export.h"

namespace electron {

COMPONENT_EXPORT(ELECTRON_LIB)
int NodeMain(int argc, char* argv[]);

}  // namespace electron

#endif  // SHELL_APP_NODE_MAIN_H_
