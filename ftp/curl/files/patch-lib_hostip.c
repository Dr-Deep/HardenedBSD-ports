--- lib/hostip.c.orig	2026-05-04 15:56:04 UTC
+++ lib/hostip.c
@@ -693,15 +693,7 @@ static CURLcode hostip_resolv(struct Curl_easy *data,
   (void)allowDOH;
 #endif
 
-  /* We should intentionally error and not resolve .onion TLDs */
   hostname_len = strlen(hostname);
-  DEBUGASSERT(hostname_len);
-  if(hostname_len >= 7 &&
-     (curl_strequal(&hostname[hostname_len - 6], ".onion") ||
-      curl_strequal(&hostname[hostname_len - 7], ".onion."))) {
-    failf(data, "Not resolving .onion address (RFC 7686)");
-    goto out;
-  }
 
 #ifdef DEBUGBUILD
   CURL_TRC_DNS(data, "hostip_resolv(%s:%u, queries=%s)",
