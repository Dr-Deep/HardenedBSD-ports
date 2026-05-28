--- clparse.c.orig	2025-12-01 19:15:31 UTC
+++ clparse.c
@@ -430,11 +430,11 @@ ERROR:
     errout(outs);
     break;
   case MEMORY:
-    sprintf(outs, outOfMemory);
+    sprintf(outs, "%s", outOfMemory);
     errout(outs);
     break;
   case FILENAME:
-    sprintf(outs, cannotOpenParameterFile);
+    sprintf(outs, "%s", cannotOpenParameterFile);
     errout(outs);
     break;
   }
