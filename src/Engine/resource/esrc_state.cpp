/*
 * ========================= esrc_state.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.09.29
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#include "esrc_state.h"
#include <unordered_set>
#include "tprAssert.h"


/* exist strs: -----
colorTableSet
renderPool
behaviour
camera
canvas
chunk
chunkData
chunkMemState
colorTableSet
ecoObj
field
gameArchive
gameObj
gameSeed
mapSurfaceRandSet
player
shader
time
ubo

json_animFrameSet
json_colorTableSet
json_ecoSysPlan
json_gameObj
json_uiGo
json_windowConfig
*/


namespace esrc {//------------------ namespace: esrc -------------------------//
namespace state_inn {//-------- namespace: state_inn  --------------//

    std::unordered_set<std::string> ents {};

}//------------- namespace: state_inn end --------------//

void insertState( const std::string &str_ ){
    tprAssert( state_inn::ents.find(str_) == state_inn::ents.end() );
    state_inn::ents.insert( str_ );
}

bool is_setState( const std::string &str_ ){
    return ( state_inn::ents.find(str_) != state_inn::ents.end() );
}


}//---------------------- namespace: esrc -------------------------//


