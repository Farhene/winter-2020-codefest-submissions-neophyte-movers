/** @file AllEnergy.cpp
 * Created by Farhene Sultana
**/

#include "AllEnergy.hpp"
#include <iostream>
#include <string>

using namespace std;

void AllEnergy::setEnergyType(std::string energy_type)
{
    
    if(energy_type == "Hydro")
    {
        Hydro hydro;
        std::cout << hydro.Description() << std::endl;
    }
    else if(energy_type == "NaturalGas")
    {
        NaturalGas natural_gas;
        std::cout << natural_gas.Description() << std::endl;
    }
    else if(energy_type == "Nuclear")
    {
        Nuclear nuclear;
        std::cout << nuclear.Description() << std::endl;
    }
    else if(energy_type == "Oil")
    {
        Oil oil;
        std::cout << oil.Description() << std::endl;
    }
    else if(energy_type == "Solar")
    {
        Solar solar;
        std::cout << solar.Description() << std::endl;
    }
    else if(energy_type == "SolarThermal")
    {
        SolarThermal solar_thermal;
        std::cout << solar_thermal.Description() << std::endl;
    }
    else if(energy_type == "Tidal")
    {
        Tidal tidal;
        std::cout << tidal.Description() << std::endl;
    }
    else if(energy_type == "Wind")
    {
        Wind wind;
        std::cout << wind.Description() << std::endl;
    }
}

void AllEnergy::energyTypeMenu()
{
    char userchoice;


    do
    {
        cout<<"Choose an energy type you'd like to know more of: "<<endl;
        cout<<"a - Hydro"<<endl;
        cout<<"b - Natural Gas"<<endl;
        cout<<"c - Nuclear"<<endl;
        cout<<"d - Oil"<<endl;
        cout<<"e - Solar"<<endl;
        cout<<"f - Solar Thermal"<<endl;
        cout<<"g - Tidal"<<endl;
        cout<<"h - Wind"<<endl;
        cout<<"i - exit"<<endl;
        cin>>userchoice;


        if(userchoice == 'a')
        {
            Hydro temp_hydro;
            cout<<temp_hydro.Description();
            temp_hydro.ListProsCons();
        }
        else if(userchoice == 'b')
        {
            NaturalGas temp_nat;
            cout<<temp_nat.Description();
            temp_nat.ListProsCons();
        }
        else if(userchoice == 'c')
        {
            Nuclear temp_nuc;
            cout<<temp_nuc.Description();
            temp_nuc.ListProsCons();
        }
        else if(userchoice == 'd')
        {
            Oil temp_oil;
            cout<<temp_oil.Description();
            temp_oil.ListProsCons();
        }
        else if(userchoice == 'e')
        {
            Solar temp_sol;
            cout<<temp_sol.Description();
            temp_sol.ListProsCons();
        }
        else if(userchoice == 'f')
        {
            SolarThermal temp_sol_ther;
            cout<<temp_sol_ther.Description();
            temp_sol_ther.ListProsCons();
        }
        else if(userchoice == 'g')
        {
            Tidal temp_tid;
            cout<<temp_tid.Description();
            temp_tid.ListProsCons();
        }
        else if(userchoice == 'h')
        {
            Wind temp_win;
            cout<<temp_win.Description();
            temp_win.ListProsCons();
        }


    }while(userchoice != 'i');

}

//End of file
