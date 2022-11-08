#ifndef CPP_ENTITYMANAGER_HPP
#define CPP_ENTITYMANAGER_HPP

#include <memory>
#include <unordered_map>

#include "GameEntity.hpp"

class EntityManager
{
    public:
    EntityManager();
    ~EntityManager();

    private:
    std::unordered_map<std::string, std::shared_ptr<GameEntity>> m_entities;

};

#endif