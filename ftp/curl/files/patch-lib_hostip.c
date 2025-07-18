--- lib/hostip.c.orig	2025-06-02 14:46:26 UTC
+++ lib/hostip.c
@@ -822,12 +822,6 @@ CURLcode Curl_resolv(struct Curl_easy *data,
 
   /* We should intentionally error and not resolve .onion TLDs */
   hostname_len = strlen(hostname);
-  if(hostname_len >= 7 &&
-     (curl_strequal(&hostname[hostname_len - 6], ".onion") ||
-      curl_strequal(&hostname[hostname_len - 7], ".onion."))) {
-    failf(data, "Not resolving .onion address (RFC 7686)");
-    goto error;
-  }
 
   /* Let's check our DNS cache first */
   dnscache_lock(data, dnscache);
