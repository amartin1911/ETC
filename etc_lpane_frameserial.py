import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gio, GObject


class Lpane_frameserial(Gtk.Frame):
    __gsignals__ = {
        'btn-refresh-clicked': (GObject.SIGNAL_RUN_FIRST, None, ()),
        'cbox-ports-changed': (GObject.SIGNAL_RUN_FIRST, None, ()),
        'notify::active': (GObject.SIGNAL_RUN_FIRST, None, ())
    }

    def __init__(self):
        super(Lpane_frameserial, self).__init__()
        self.set_label("Conexión Serial")

        self._grid = Gtk.Grid()
        self.add(self._grid)

        self._cbox_ports = Gtk.ComboBox()
        renderer_text = Gtk.CellRendererText()
        self._cbox_ports.pack_start(renderer_text, True)
        self._cbox_ports.add_attribute(renderer_text, "text", 0)
        self._cbox_ports.connect("changed", self.on_cbox_ports_changed)
        self._grid.attach(self._cbox_ports, 0, 0, 2, 1)

        self._btn_refresh = Gtk.Button()
        refresh_icon = Gio.ThemedIcon(name="view-refresh-symbolic")
        refresh_image = Gtk.Image.new_from_gicon(refresh_icon,
                                                 Gtk.IconSize.BUTTON)
        self._btn_refresh.set_image(refresh_image)
        self._btn_refresh.connect("clicked", self._on_btn_refresh_clicked)
        self._grid.attach(self._btn_refresh, 2, 0, 1, 1)

        self._switch_serial = Gtk.Switch()
        self._switch_serial.connect("notify::active", self.on_switch_serial_toggled)
        self._grid.attach(self._switch_serial, 0, 1, 2, 1)

        self._btn_config = Gtk.Button()
        config_icon = Gio.ThemedIcon(name="emblem-system-symbolic")
        config_image = Gtk.Image.new_from_gicon(config_icon,
                                                Gtk.IconSize.BUTTON)
        self._btn_config.set_image(config_image)
        self._grid.attach(self._btn_config, 2, 1, 1, 1)

    def on_cbox_ports_changed(self, cbox):
        self.emit('cbox-ports-changed')

    def _on_btn_refresh_clicked(self, button):
        self.emit('btn-refresh-clicked')

    def on_switch_serial_toggled(self, switch, state):
        self.emit('notify::active', state)
    #     if switch.get_active():
    #         print('Switch ON')
    #         self.controller.arduino.open_port()
    #         # controller.start_read_thread(self.arduino,
    #         #                              self.tree_view_parameters)
    #         print(self.controller.arduino)
    #         self.controller.start_read_thread()
    #     else:
    #         print('Switch OFF')
    #         self.controller.arduino.close_port()
    #         print(self.controller.arduino)
