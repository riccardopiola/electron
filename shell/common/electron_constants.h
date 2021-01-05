// Copyright (c) 2015 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_COMMON_ELECTRON_CONSTANTS_H_
#define SHELL_COMMON_ELECTRON_CONSTANTS_H_

#include "base/component_export.h"
#include "base/files/file_path.h"
#include "build/build_config.h"
#include "electron/buildflags/buildflags.h"

namespace electron {

// The app-command in NativeWindow.
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kBrowserForward[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kBrowserBackward[];

// Strings describing Chrome security policy for DevTools security panel.
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kSHA1Certificate[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kSHA1MajorDescription[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kSHA1MinorDescription[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kCertificateError[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kValidCertificate[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kValidCertificateDescription[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kSecureProtocol[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kSecureProtocolDescription[];

#if BUILDFLAG(ENABLE_RUN_AS_NODE)
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kRunAsNode[];
#endif

#if BUILDFLAG(ENABLE_PDF_VIEWER)
// The MIME type used for the PDF plugin.
COMPONENT_EXPORT(ELECTRON_LIB) extern const char kPdfPluginMimeType[];
COMPONENT_EXPORT(ELECTRON_LIB) extern const base::FilePath::CharType kPdfPluginPath[];
#endif  // BUILDFLAG(ENABLE_PDF_VIEWER)

}  // namespace electron

#endif  // SHELL_COMMON_ELECTRON_CONSTANTS_H_
