#include <gtk/gtk.h>
#include <glade/glade.h>

void some_signal_handler_func(GtkWidget *widget, gpointer user_data) {
  /* do something useful here */
}

void on_main_menu_open_activate (GtkWidget *widget, gpointer user_data){
	printf("Get [OPEN] signal!!!\n");
}

int main(int argc, char *argv[]) {
    GladeXML *xml;

    gtk_init(&argc, &argv);

    /* load the interface */
    xml = glade_xml_new("glade-1.glade", NULL, NULL);

    /* connect the signals in the interface */
    glade_xml_signal_autoconnect(xml);

    /* start the event loop */
    
    gtk_main();

    return 0;
}
