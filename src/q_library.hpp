#pragma once

#include "h-basic.h"

#include <string>

bool_ quest_library_init_hook(int q);
std::string quest_library_describe();
void quest_library_building(bool_ *paid, bool_ *recreate);
void initialize_bookable_spells();
