// $URL: http://svn.rebarp.se/svn/RME/trunk/source/main.cpp $
// $Id: main.cpp 309 2010-02-26 17:38:36Z admin $

#include "main.h"

#include "about_window.hpp"
#include "action.hpp"
#include "application.hpp"
#include "basemap.hpp"
#include "brush.hpp"
#include "client_version.hpp"
#include "common.hpp"
#include "common_windows.hpp"
#include "complexitem.hpp"
#include "copybuffer.hpp"
#include "creature.hpp"
#include "creatures.hpp"
#include "dat_debug_view.hpp"
#include "dcbutton.hpp"
#include "editor.hpp"
#include "editor_tabs.hpp"
#include "filehandle.hpp"
#include "graphics.hpp"
#include "gui.hpp"
#include "house.hpp"
#include "iomap.hpp"
#include "iomap_otbm.hpp"
//#include "iomap_otmm.hpp"
#include "item_attributes.hpp"
#include "item.hpp"
#include "items.hpp"
#include "map.hpp"
#include "map_display.hpp"
#include "map_drawer.hpp"
#include "map_region.hpp"
#include "map_window.hpp"
#include "materials.hpp"
#include "map_tab.hpp"
#include "main_menubar.hpp"
#include "minimap_window.hpp"
#include "mt_rand.hpp"
#include "numbertextctrl.hpp"
#include "palette_window.hpp"
#include "palette_brushlist.hpp"
#include "palette_creature.hpp"
#include "palette_house.hpp"
#include "palette_common.hpp"
#include "palette_waypoints.hpp"
#include "preferences.hpp"
#include "properties_window.hpp"
#include "process_com.hpp"
#include "result_window.hpp"
#include "selection.hpp"
#include "settings.hpp"
#include "spawn.hpp"
#include "templatemap76-74.hpp"
#include "templatemap81.hpp"
#include "templatemap854.hpp"
#include "tile.hpp"
#include "tileset.hpp"
#include "town.hpp"
#include "updater.hpp"
#include "waypoints.hpp"

#include "live_action.hpp"
#include "live_client.hpp"
#include "live_peer.hpp"
#include "live_server.hpp"
#include "live_socket.hpp"
#include "live_tab.hpp"
#include "net_connection.hpp"


#include "brush_tables.hpp"
#include "carpet_brush.hpp"
#include "creature_brush.hpp"
#include "doodad_brush.hpp"
#include "eraser_brush.hpp"
#include "ground_brush.hpp"
#include "house_brush.hpp"
#include "house_exit_brush.hpp"
#include "raw_brush.hpp"
#include "spawn_brush.hpp"
#include "table_brush.hpp"
#include "wall_brush.hpp"
#include "waypoint_brush.hpp"