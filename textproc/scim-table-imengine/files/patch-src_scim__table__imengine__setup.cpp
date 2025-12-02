--- src/scim_table_imengine_setup.cpp.orig	2025-12-02 19:14:05 UTC
+++ src/scim_table_imengine_setup.cpp
@@ -2326,6 +2326,7 @@ validate_table_properties_data (const GenericTableLibr
                                           GTK_DIALOG_MODAL,
                                           GTK_MESSAGE_ERROR,
                                           GTK_BUTTONS_CLOSE,
+                                          "%s",
                                           err.c_str ());
         gtk_dialog_run (GTK_DIALOG (msg));
         gtk_widget_destroy (msg);
