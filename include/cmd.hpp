//
// VM.hpp for  in /home/velly_a/VM
// 
// Made by adrien velly$
// Login   <velly_a@epitech.net>
// 
// Started on  14 Jul 14 10:18 AM 2016 adrien velly
// Last update 14 Jul 14 10:18 AM 2016 adrien velly
//

#ifndef CMD
#define CMD

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class               Cmd
{
private:

    std::string     commande;

public:

                    Cmd(const std::string &commande);
                    ~Cmd();
    std::string     getCommande(void) const;
    std::string     getInstruction(void) const;
    std::string     getType(void) const;
    std::string     getValue(void) const;
    void            setCommande(const std::string &value);
};

#endif //CMD