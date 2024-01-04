// Playground for FluxLumina
#include <FluxLumina.hpp>

int main(int argc, char** argv)
{
    FluxLumina engine(E_RenderStrategy::PBSShading);

    // Add camera
    engine.create_Camera();

    // Skybox
    engine.create_IBL("res/models/lightmap/meadow_4k.hdr", true);

    // Models
    std::vector<std::string> heightMaps_grass({"grass_height.png"});
    std::vector<std::string> lightMaps_grass({"grass_ao.png"});
    auto grass_sphere_ID = engine.create_Model("res/models/grass-sphere/grass-sphere.glb", "PBR_basic", true, {heightMaps_grass, lightMaps_grass});
    engine.setPosition(grass_sphere_ID, {-2.5f, -1.25f, -5.0f});

    std::vector<std::string> heightMaps_gold({"gold_height.png"});
    std::vector<std::string> lightMaps_gold({"gold_ao.png"});
    auto gold_sphere_ID = engine.create_Model("res/models/gold-sphere/gold-sphere.glb", "PBR_basic", true, {heightMaps_gold, lightMaps_gold});
    engine.setPosition(gold_sphere_ID, {-2.5f, 1.25f, -5.0f});

    std::vector<std::string> heightMaps_leather({"leather-height.png"});
    auto leather_sphere_ID = engine.create_Model("res/models/leather-sphere/leather-sphere.glb", "PBR_basic", true, {heightMaps_leather});
    engine.setPosition(leather_sphere_ID, {0.0f, -1.25f, -5.0f});

    std::vector<std::string> heightMaps_foil({"foil_height.png"});
    std::vector<std::string> lightMaps_foil({"foil_ao.png"});
    auto foil_sphere_ID = engine.create_Model("res/models/foil-sphere/foil-sphere.glb", "PBR_basic", true, {heightMaps_foil, lightMaps_foil});
    engine.setPosition(foil_sphere_ID, {0.0f, 1.25f, -5.0f});

    std::vector<std::string> heightMaps_rust({"rust-iron_height.png"});
    std::vector<std::string> lightMaps_rust({"rust-iron_ao.png"});
    auto rust_sphere_ID = engine.create_Model("res/models/rust-iron-sphere/rust-iron-sphere.glb", "PBR_basic", true, {heightMaps_rust, lightMaps_rust});
    engine.setPosition(rust_sphere_ID, {2.5f, -1.25f, -5.0f});

    std::vector<std::string> heightMaps_plastic({"plastic_height.png"});
    std::vector<std::string> lightMaps_plastic({"plastic_ao.png"});
    auto plastic_sphere_ID = engine.create_Model("res/models/plastic-sphere/plastic-sphere.glb", "PBR_basic", true, {heightMaps_plastic, lightMaps_plastic});
    engine.setPosition(plastic_sphere_ID, {2.5f, 1.25f, -5.0f});

    // Begin main loop
    engine.update();
}
