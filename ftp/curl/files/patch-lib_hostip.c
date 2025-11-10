--- lib/hostip.c.orig	2025-11-10 20:46:52 UTC
+++ lib/hostip.c
@@ -858,15 +858,8 @@ CURLcode Curl_resolv(struct Curl_easy *data,
   if(!dnscache)
     goto error;
 
-  /* We should intentionally error and not resolve .onion TLDs */
   hostname_len = strlen(hostname);
   DEBUGASSERT(hostname_len);
-  if(hostname_len >= 7 &&
-     (curl_strequal(&hostname[hostname_len - 6], ".onion") ||
-      curl_strequal(&hostname[hostname_len - 7], ".onion."))) {
-    failf(data, "Not resolving .onion address (RFC 7686)");
-    goto error;
-  }
 
   /* Let's check our DNS cache first */
   dnscache_lock(data, dnscache);
