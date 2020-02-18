/*
* Copyright © 2019 Alain M. (https://github.com/alainm23/planner)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Alain M. <alainmh23@gmail.com>
*/

int main (string[] args) {
    Gtk.init (ref args);
    
    var core = new Retro.Core ("/home/alain/cores/mgba_libretro.so");
    core.set_medias ({ "file:///home/alain/cores/Super Mario Advance 2 - Super Mario World (U) [!].gba" });
    try {
        core.boot();
    }
    catch (Error e) {
        critical (e.message);

        return 1;
    }

    var view = new Retro.CoreView ();
    view.set_as_default_controller (core);
    view.set_core (core);
    view.show ();

    var loop = new Retro.MainLoop (core);
    loop.start ();

    var win = new Gtk.Window ();
    win.destroy.connect (Gtk.main_quit);
    win.add (view);
    win.present ();

    Gtk.main ();
}