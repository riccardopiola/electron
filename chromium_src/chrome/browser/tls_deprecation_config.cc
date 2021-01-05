#ifndef CHROMIUM_SRC_TLS_DEPRECATION_CONFIG_CC
#define CHROMIUM_SRC_TLS_DEPRECATION_CONFIG_CC

#include <string>

class GURL;

bool ShouldSuppressLegacyTLSWarning(const GURL& url) {
  // This file is only included in debug builds anyway
  return true;
}

#endif  // CHROMIUM_SRC_TLS_DEPRECATION_CONFIG_CC