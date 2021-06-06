#include <gazebo-11/gazebo/gazebo.hh>

namespace gazebo {

/**
 * @brief The plugin
 */ 
class WelcomePlugin : public WorldPlugin {
public:
    WelcomePlugin() : WorldPlugin() {
        printf("Welcome to Felipe’s World!\n");
    }

    /**
     * @brief Receives information from the world file. Mandatory !
     */ 
    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {

    }
};

/** Register the plugin within the simulator */
GZ_REGISTER_WORLD_PLUGIN(WelcomePlugin)

}