#pragma once
#include "../Dependencies/json.hpp"

using json = nlohmann::json;

namespace Misc
{
	json getJSON(std::string file);
	void setJSON(std::string file, json jsonFile);
}

