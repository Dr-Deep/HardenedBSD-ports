--- tests/test-unique.c.orig	2025-12-02 02:35:45 UTC
+++ tests/test-unique.c
@@ -82,10 +82,10 @@ app_message_cb (UniqueApp         *app,
                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                    GTK_MESSAGE_INFO,
                                    GTK_BUTTONS_CLOSE,
-                                   title);
+                                   "%s", title);
   if (message)
     gtk_message_dialog_format_secondary_text (GTK_MESSAGE_DIALOG (dialog),
-                                              message);
+                                              "%s", message);
 
   gtk_window_set_urgency_hint (GTK_WINDOW (dialog), TRUE);
 
