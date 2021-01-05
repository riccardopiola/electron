// Copyright (c) 2018 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_

#include "base/component_export.h"
#include "base/command_line.h"

namespace electron {

COMPONENT_EXPORT(ELECTRON_LIB)
bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv);

}  // namespace electron

#endif  // SHELL_APP_COMMAND_LINE_ARGS_H_
