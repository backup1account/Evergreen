#ifndef CPP_PLAYER_HPP
#define CPP_PLAYER_HPP

#include <memory>
#include <string>
#include "GameEntity.hpp"


// INHERITS FROM CHARACTER BASE CLASS ?
class Player
{
    public:
    Player(const std::string& filename, const float& max_velocity);
    ~Player();

    GameEntity* GetPlayerEntity();

    // void Tick(sf::Time& elapsed_t);

    private:
    void InitializeComponents(const std::string& filename, const float& max_velocity);

    private:
    std::shared_ptr<GameEntity> m_entity;
};

#endif
