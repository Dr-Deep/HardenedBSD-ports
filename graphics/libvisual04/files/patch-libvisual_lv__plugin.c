--- libvisual/lv_plugin.c.orig	2025-11-26 00:09:09 UTC
+++ libvisual/lv_plugin.c
@@ -442,11 +442,11 @@ VisList *visual_plugin_registry_filter (VisList *plugl
 				
 				visual_list_add (list, ref);
 			} else if (ret != FALSE) {
-				visual_log (VISUAL_LOG_WARNING, visual_error_to_string (ret));
+				visual_log (VISUAL_LOG_WARNING, "%s", visual_error_to_string (ret));
 			}
 		}
 		else if (ret != FALSE) { /* FIXME XXX TODO, patch frmo duilio check how this works */
-			visual_log (VISUAL_LOG_WARNING, visual_error_to_string (ret));
+			visual_log (VISUAL_LOG_WARNING, "%s", visual_error_to_string (ret));
 		}
 	}
 
