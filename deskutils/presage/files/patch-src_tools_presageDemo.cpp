--- src/tools/presageDemo.cpp.orig	2025-12-05 03:30:41 UTC
+++ src/tools/presageDemo.cpp
@@ -173,7 +173,7 @@ int main(int argc, char** argv)
 	    // key corresponding to desired token. selecting
 	    // suggestion.
 	    std::string message = "Last selected word: " + words[c - KEY_F0 - 1];
-	    mvprintw(LINES - 3, 0, message.c_str());
+	    mvprintw(LINES - 3, 0, "%s", message.c_str());
             clrtoeol();
 	    move(LINES, COLS);
 
@@ -213,7 +213,7 @@ void draw_context_win(WINDOW* win, std::string str)
 {
     wclear( win );
     box( win, 0, 0 );
-    mvwprintw( win, 1, 1, str.c_str() );
+    mvwprintw( win, 1, 1, "%s", str.c_str() );
     wrefresh( win );
 }
 
@@ -226,7 +226,7 @@ void drawMsgWin( WINDOW* win, std::vector<std::string>
     int i = 1;
     std::vector<std::string>::const_iterator j = words.begin();
     while( j != words.end() ) {
-	mvwprintw( win, i, 1, j->c_str() );
+	mvwprintw( win, i, 1, "%s", j->c_str() );
 	i++;
 	j++;
     }
@@ -241,7 +241,7 @@ void draw_function_keys(WINDOW* win)
     for (int i = 1; i <= atoi(suggestions.c_str()); i++) {
         std::stringstream ss;
         ss << 'F' << i;
-        mvwprintw(win, i, 1, ss.str().c_str());
+        mvwprintw(win, i, 1, "%s", ss.str().c_str());
     }
     wrefresh(win);
 }
@@ -291,7 +291,7 @@ void draw_previous_suggestions(std::vector<std::string
 	     strit != listit->end();
 	     strit++) {
 	    
-	    mvwprintw(win, line, 1, strit->c_str());
+	    mvwprintw(win, line, 1, "%s", strit->c_str());
 	    line++;
 	}
 
@@ -352,7 +352,7 @@ void draw_title_win(WINDOW* title_win)
 {
     wclear(title_win);
     box(title_win, 0, 0);
-    mvwprintw(title_win, 1, 1, "Presage Demo ", VERSION);
+    mvwprintw(title_win, 1, 1, "Presage Demo %s", VERSION);
     mvwprintw(title_win, 2, 1, "Copyright (C) Matteo Vescovi");
     mvwprintw(title_win, 3, 1, "This is free software; see the source for copying conditions.  There is NO");
     mvwprintw(title_win, 4, 1, "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.");
