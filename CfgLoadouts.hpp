
#include "macros.hpp"
#include "traits.hpp"

//#include "17_US_ARMY_OCP.hpp"
//#include "17_US_ARMY_UCP.hpp"
//#include "17_USMC_D.hpp"
//#include "17_USMC_W.hpp"
//#include "17_IDF.hpp"

class CfgLoadouts {
    #define SIDE Blufor
    #define SIDE_SHORT b
    #include "17_US_ARMY_OCP.hpp"
    #include "common.hpp"
    
    #define SIDE Opfor
    #define SIDE_SHORT o
    #include "17_IDF.hpp"
    #include "common.hpp"

    #define SIDE Independant
    #define SIDE_SHORT i
    #include "17_USMC_W.hpp"
    #include "common.hpp"
    
};
