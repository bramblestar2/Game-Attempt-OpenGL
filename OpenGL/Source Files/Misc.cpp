#include "../Headers/Misc.h"
#include <fstream>

json Misc::getJSON(std::string file)
{
    std::ifstream info(file);
    json infoJson = json::parse(info);

    return infoJson;
}

void Misc::setJSON(std::string file, json jsonFile)
{
    std::ofstream info(file);
    info << std::setw(4) << jsonFile;
}

float Misc::lerp(float a, float b, float t)
{
    return a + t * (b - a);
}
