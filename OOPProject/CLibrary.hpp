#pragma once

#include <memory>
#include <vector>

#include "IMedia.hpp"
#include "CBook.hpp"
#include "CEbook.hpp"
#include "CAudioBook.hpp"

namespace Library
{
class CLibrary
{
public:
    inline std::vector<std::unique_ptr<IMedia>> getInventory() {
        std::vector<std::unique_ptr<IMedia>> inventory;

        inventory.push_back(std::make_unique<CBook>(1, "Submarines", e_type::book));
        inventory.push_back(std::make_unique<CEbook>(2, "Shipwreck", e_type::eBook));
        inventory.push_back(std::make_unique<CAudioBook>(3, "Sailor", e_type::audioBook));

        return inventory;
    }
};
}